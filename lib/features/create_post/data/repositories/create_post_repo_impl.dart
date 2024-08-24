import 'package:take_my_tym/features/create_post/data/datasources/remote_data_source/create_post_remote_data.dart';
import 'package:take_my_tym/core/model/app_post_model.dart';
import 'package:take_my_tym/features/create_post/domain/repositories/create_post_repo.dart';

final class CreatePostRepoImpl implements CreatePostRepo {
  final CreatePostRemoteData _remoteDataSource;
  CreatePostRepoImpl(this._remoteDataSource);

  @override
  Future<bool> buyTymPost({required PostModel postModel}) async {
    return await _remoteDataSource.buyTymPost(postModel: postModel);
  }

  @override
  Future<bool> sellTymPost({required PostModel postModel}) async {
    return await _remoteDataSource.sellTymPost(postModel: postModel);
  }
}
