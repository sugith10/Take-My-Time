import 'package:cloud_firestore/cloud_firestore.dart';

abstract interface class IndividualMessageRepo {
  Future<void> sendMessage({
    required String currentUid,
    required String recipientUserId,
    required String message,
  });

  Stream<QuerySnapshot> getMessages({
    required String currentUid,
    required String receiverUid,
  });

  Stream<DocumentSnapshot> getChatPartnerInfoStream({
    required String recipientUserId });
}
