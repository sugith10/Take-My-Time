import 'package:hive/hive.dart';
import 'package:take_my_tym/core/model/app_user_model.dart';
import 'package:take_my_tym/core/util/app_exception.dart';

final class LocalUserData {
  // Function to store user data in Hive after signing in
  Future<void> storeUserDataLocal(UserModel user) async {
    final userBox = await Hive.openBox('userData');

    await userBox.put('user', user.toMap());
    userBox.close();
  }

// Function to retrieve user data from Hive
  Future<UserModel?> getUserDataFromLocal() async {
    try {
      final userBox = await Hive.openBox('userData');

      final userData = userBox.get('user');
      if (userData != null) {
        final userDataMap = Map<String, dynamic>.from(userData);

        userBox.close();
        return UserModel.fromMap(userDataMap);
      }
    } catch (e) {
      throw AppException(details: e.toString(), alert: e.toString());
    }
    return null;
  }

// Function to logout user
  Future<void> userSignOutFromLocal() async {
    try {
      final userBox = await Hive.openBox('userData');
      await userBox.clear();
      userBox.close();
    } catch (e) {
      throw AppException(details: e.toString(), alert: e.toString());
    }
  }
}
