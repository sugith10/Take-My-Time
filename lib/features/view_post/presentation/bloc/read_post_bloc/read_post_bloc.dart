
import 'package:equatable/equatable.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:get_it/get_it.dart';
import 'package:take_my_tym/core/model/app_post_model.dart';
import 'package:take_my_tym/core/util/app_logger.dart';
import 'package:take_my_tym/features/view_post/domain/usecases/get_user_posts_usecase.dart';

part 'read_post_event.dart';
part 'read_post_state.dart';

class GetPostsBloc extends Bloc<ReadPostEvent, ReadPostsState> {
  GetPostsBloc() : super(UserPostsLoadingState()) {
    final GetUserPostsUseCase getUserPostsUseCase =
        GetIt.instance<GetUserPostsUseCase>();

    on<GetBuyTymPostsEvent>((event, emit) async {
      emit(UserPostsLoadingState());
      try {
        List<PostModel> userBuyTymPost =
            await getUserPostsUseCase.getBuyTymPosts(userId: event.userId);
        emit(GotBuyTymPostsState(buyTymPostModel: userBuyTymPost));
      } catch (e) {
        emit(const UserPostError(error: "No data found"));
      }
    });

    on<GetSellTymPostsEvent>(((event, emit) async {
      emit(UserPostsLoadingState());
      try {
        List<PostModel> postModels =
            await getUserPostsUseCase.getSellTymPosts(userId: event.userId);

        emit(GotSellTymPostsState(sellTymPostModels: postModels));
      } catch (e) {
        appLogger.e('no data found');
        emit(const UserPostError(error: "No data found"));
      }
    }));
  }
}
