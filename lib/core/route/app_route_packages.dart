import 'package:flutter/material.dart';
import 'package:take_my_tym/core/model/app_post_model.dart';
import 'package:take_my_tym/core/model/app_user_model.dart';
import 'package:take_my_tym/features/profile/presentation/page/account_info_page.dart';
import 'package:take_my_tym/features/profile/presentation/page/edit_profile.dart';

import '../../features/auth/presentation/pages/forget_password_page.dart';
import '../../features/auth/presentation/pages/sign_in_page.dart';
import '../../features/auth/presentation/pages/welcome_page.dart';
import '../../features/create_post/presentation/model/create_page_second_arguments.dart';
import '../../features/create_post/presentation/page/create_post_first_page.dart';
import '../../features/create_post/presentation/page/create_post_second_page.dart';
import '../../features/error/presentation/page/error_page.dart';
import '../../features/location/presentation/bloc/location_bloc.dart';
import '../../features/location/presentation/pages/select_location_page.dart';
import '../../features/navigation_menu/presentation/pages/home_navigation_menu.dart';
import '../../features/oboarding/presentation/pages/splash_page/splash_page.dart';
import '../../features/profile/presentation/page/profile_setup_page.dart';
import '../../features/success/presentation/model/success_page_arguments.dart';
import '../../features/success/presentation/success_page.dart';
import '../../features/wallet/data/models/transaction_model.dart';
import '../../features/wallet/presentation/model/payment_page_arguments.dart';
import '../../features/wallet/presentation/pages/payment_page.dart';
import '../../features/wallet/presentation/pages/transactions_page.dart';
import 'page_transition/app_page_transition.dart';
import 'route_name/app_route_name.dart';

part 'app_route.dart';