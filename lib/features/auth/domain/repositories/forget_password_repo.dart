abstract interface class ForgetPasswordRepo{
  Future<void>resetPassword({required String email})async{}
}