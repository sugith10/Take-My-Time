// import 'dart:developer';
import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:take_my_tym/core/util/app_exception.dart';
import 'package:take_my_tym/core/model/app_post_model.dart';

final class UpdatePostRemoteData {
  Future<PostModel> upadateBuyTymPosts({required PostModel postModel}) async {
    try {
      // log("Updating buy-tym post: $postModel");
      await FirebaseFirestore.instance
          .collection("buyTymPost")
          .doc(postModel.postId)
          .update(postModel.toMap())
          .then((value) {
        return postModel;
      });
    } catch (e) {
      // log("buy tym${e.toString()}");
      throw AppException(alert: e.toString(), details: e.toString());
    }
    return postModel;
  }

  Future<PostModel> upadateSellTymPosts({required PostModel postModel}) async {
    try {
      // log("Updating sell-tym post: $postModel");
      await FirebaseFirestore.instance
          .collection("sellTymPost")
          .doc(postModel.postId)
          .update(postModel.toMap())
          .then((value) => postModel);
      return postModel;
    } catch (e) {
      // log(e.toString());
      throw AppException(alert: e.toString(), details: e.toString());
    }
  }
}
