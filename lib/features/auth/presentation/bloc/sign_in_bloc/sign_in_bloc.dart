import 'package:equatable/equatable.dart';
import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:get_it/get_it.dart';
import 'package:take_my_tym/core/util/app_error_msg.dart';
import 'package:take_my_tym/core/util/app_exception.dart';
import 'package:take_my_tym/core/model/app_user_model.dart';
import 'package:take_my_tym/core/util/app_logger.dart';
import 'package:take_my_tym/features/auth/domain/usecases/local_user_storage_usecase.dart';
import 'package:take_my_tym/features/auth/domain/usecases/signin_usecase.dart';

part 'sign_in_event.dart';
part 'sign_in_state.dart';

/// Manages user email sign-up process and its states.
class SignInBloc extends Bloc<SignInEvent, SignInState> {
  SignInBloc() : super(SignInInitial()) {
    on<SignInEvent>(_onSignIn);
  }

  /// Handles user sign-in.
  /// Authenticates user, stores user data locally, and emits corresponding success or failure states.
  _onSignIn(
    SignInEvent event,
    Emitter<SignInState> emit,
  ) async {
    emit(SignInLoadingState());

    // Check if the form is valid
    if (event.formKey.currentState!.validate()) {
      try {
        // SignInUseCase is retrieved from the GetIt instance
        final signInUseCase = GetIt.instance<SignInUseCase>();

        // authUserModel is set to the result of the authenticateUser method, which takes the email and password as arguments
        UserModel authUserModel =
            await signInUseCase.authenticateUser(event.email, event.password);

        // storeUserDataLocal is called with the authUserModel as an argument, which stores the user data locally
        await GetIt.instance<LocalUserStorageUseCase>()
            .storeUserDataLocal(authUserModel);
        // if the authUserModel is blocked, a SignInErrorState with an AppAlert is emitted
        if (authUserModel.blocked) {
          emit(SignInErrorState(
              error: AppAlert(
                  alert:
                      "Due to unusual activity, your account has been blocked.")));
          // else, if the authUserModel has a about, a SignInSuccessState with a profileSetupComp set to true is emitted
        } else {
          if (authUserModel.about != null) {
            emit(SignInSuccessState(
              profileSetupComp: true,
              userModel: authUserModel,
            ));
          } else {
            // else, a SignInSuccessState with a profileSetupComp set to false is emitted
            emit(SignInSuccessState(
              profileSetupComp: false,
              userModel: authUserModel,
            ));
          }
        }
      } on AppException catch (e) {
        // An AppAlert is created with the alert and details from the exception
        final AppAlert error = AppAlert(
          alert: e.alert,
          details: e.details,
        );
        // a SignInErrorState with the AppAlert is emitted
        emit(
          SignInErrorState(error: error),
        );
      } catch (e) {
        // log the error
        appLogger.e(e);

        // a SignInErrorState with AppAlert is emitted
        emit(
          SignInErrorState(error: AppAlert()),
        );
      }
    } else {
      emit(SignInErrorState(error: AppAlert()));
    }
  }
}
