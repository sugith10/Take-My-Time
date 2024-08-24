import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';

import 'app_view.dart';
import 'core/bloc/user_bloc/user_bloc.dart';
import 'features/contract/presentation/bloc/contracts_bloc/contracts_bloc.dart';
import 'features/home/presentation/bloc/community_posts_bloc/community_posts_bloc.dart';
import 'features/message/presentation/bloc/chat_list_bloc/chat_list_bloc.dart';
import 'features/proposal/presentation/bloc/get_offer_bloc/get_proposal_bloc.dart';
import 'features/view_post/presentation/bloc/read_post_bloc/read_post_bloc.dart';
import 'features/wallet/presentation/bloc/wallet_bloc/wallet_bloc.dart';

class MyApp extends StatefulWidget {
  const MyApp({super.key});

  @override
  State<MyApp> createState() => _MyUserState();
}

class _MyUserState extends State<MyApp> {
  @override
  void dispose() {
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return MultiBlocProvider(
      providers: [
        BlocProvider<UserBloc>(
          create: (context) => UserBloc()..add(UserCheckEvent()),
        ),
        BlocProvider<GetProposalBloc>(
          create: (context) => GetProposalBloc()
            ..add(
              ProposalGetEvent(uid: context.read<UserBloc>().userModel!.uid),
            ),
        ),
        BlocProvider<WalletBloc>(
          create: (context) => WalletBloc()
            ..add(
              WalletBalanceEvent(
                  uid: context.read<UserBloc>().userModel!.uid),
            ),
        ),
        BlocProvider<GetPostsBloc>(
          create: (context) => GetPostsBloc()
            ..add(
              GetBuyTymPostsEvent(
                  userId: context.read<UserBloc>().userModel!.uid),
            ),
        ),
        BlocProvider<CommunityPostsBloc>(
          create: (context) => CommunityPostsBloc()
            ..add(BuyTymCommunityPostsEvent(
                userId: context.read<UserBloc>().userModel!.uid)),
        ),
        BlocProvider<ChatListBloc>(
          create: (context) => ChatListBloc()
            ..add(
              GetChatList(
                  currentUid: context.read<UserBloc>().userModel!.uid),
            ),
        ),
        BlocProvider<ContractsBloc>(create: (context) => ContractsBloc()),
      ],
      child: const MyAppView(),
    );
  }
}
