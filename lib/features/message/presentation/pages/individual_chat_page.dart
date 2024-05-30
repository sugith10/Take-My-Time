import 'dart:developer';

import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_screenutil/flutter_screenutil.dart';
import 'package:iconly/iconly.dart';

import '../../../../core/utils/text_manipulator/taxt_manipulator.dart';
import '../../../../core/widgets/app_dialog.dart';
import '../../../../core/widgets/popup_menu_item_child_widget.dart';
import '../bloc/individual_message_bloc/individual_message_bloc.dart';
import '../widgets/chat_text_field.dart';
import '../widgets/chat_widget.dart';

class IndividualChatPage extends StatefulWidget {
  final String receiverUid;
  final String currentUid;
  final String receiverName;

  final IndividualMessageBloc individualMessageBloc;

  const IndividualChatPage({
    required this.currentUid,
    required this.receiverUid,
    required this.receiverName,
    required this.individualMessageBloc,
    super.key,
  });

  @override
  State<IndividualChatPage> createState() => _IndividualChatPageState();
}

class _IndividualChatPageState extends State<IndividualChatPage> {
  final ScrollController _scrollController = ScrollController();

  @override
  void initState() {
    super.initState();
    widget.individualMessageBloc.add(
      GetMessagesEvent(
        currentUserId: widget.currentUid,
        recipientUserId: widget.receiverUid,
      ),
    );
  }

  void _scrollToBottom() {
    if (_scrollController.hasClients) {
      _scrollController.jumpTo(_scrollController.position.maxScrollExtent);
    }
  }

  @override
  void dispose() {
    _scrollController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.receiverName),
        actions: [
          PopupMenuButton(
            itemBuilder: (context) => [
              const PopupMenuItem(
                value: ("Block"),
                child: PopupMenuItemChildWidget(
                  value: 'Block',
                  icon: IconlyLight.shield_fail,
                ),
              ),
              const PopupMenuItem(
                value: ("Report"),
                child: PopupMenuItemChildWidget(
                  value: 'Report',
                  icon: IconlyLight.danger,
                ),
              ),
            ],
            onSelected: (value) {
              switch (value) {
                case 'Block':
                  AppDialog.show(
                    context: context,
                    title: 'Block User',
                    subtitle: 'Are you sure you want to block this user?',
                    action: 'Block',
                    actionCall: () {},
                  );
                  break;
                case 'Report':
                  log('report');
                  break;
              }
            },
          )
        ],
      ),
      body: Padding(
        padding: EdgeInsets.only(left: 20.h, right: 20.h, top: 20.h),
        child: BlocBuilder(
          bloc: widget.individualMessageBloc,
          builder: (context, state) {
            if (state is IndividualChatsLoadedState) {
              return StreamBuilder<QuerySnapshot>(
                stream: state.messages,
                builder: (context, snapshot) {
                  if (snapshot.hasData) {
                    WidgetsBinding.instance.addPostFrameCallback((_) {
                      _scrollToBottom();
                    });
                    return ListView.builder(
                      controller: _scrollController,
                      physics: const AlwaysScrollableScrollPhysics(),
                      itemCount: snapshot.data!.docs.length,
                      itemBuilder: (context, index) {
                        final messageData = snapshot.data!.docs[index];
                        final message = messageData['message'] ?? 'error';
                        final senderId = messageData['senderUid'] ?? 'error';
                        final time = messageData['timestamp'] ?? Timestamp.now();
                        return ConstrainedBox(
                          constraints: const BoxConstraints( 
                            maxWidth: 50
                          ),
                          child: ChatWidget(
                            message: message,
                            senderId: senderId,
                            time: TextManipulator.timestampToTime(time),
                          ),
                        );
                      },
                    );
                  } else if (snapshot.hasError) {
                    return Center(child: Text('Error: ${snapshot.error}'));
                  } else {
                    return const SizedBox.shrink();
                  }
                },
              );
            } else {
              return const Center(
                child: CircularProgressIndicator(),
              );
            }
          },
        ),
      ),
      bottomNavigationBar: ChatTextField(
        individualMessageBloc: widget.individualMessageBloc,
        currentUid: widget.currentUid,
        receiverUid: widget.receiverUid,
        receiverName: widget.receiverName,
      ),
    );
  }
}
