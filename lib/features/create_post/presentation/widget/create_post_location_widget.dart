import 'package:flutter/material.dart';
import 'package:flutter_bloc/flutter_bloc.dart';
import 'package:flutter_screenutil/flutter_screenutil.dart';
import 'package:iconly/iconly.dart';
import 'package:take_my_tym/core/route/route_name/app_route_name.dart';

import '../../../../core/theme/color/app_colors.dart';
import '../../../../core/const/app_radius.dart';
import '../../../../core/widgets/home_padding.dart';
import '../../../location/presentation/bloc/location_bloc.dart';

class CreatePostLocationWidget extends StatelessWidget {
  final LocationBloc locationBloc;
  final TextStyle? style;
  final double gap;
  const CreatePostLocationWidget({
    required this.locationBloc,
    super.key,
    required this.style,
    required this.gap,
  });

  @override
  Widget build(BuildContext context) {
    return Column(
      crossAxisAlignment: CrossAxisAlignment.start,
      children: [
        Text(
          "Location",
          style: style,
        ),
        SizedBox(height: gap),
        InkWell(
          onTap: () {
            Navigator.pushNamed(
              context,
              RouteName.location,
              arguments: locationBloc,
            );
          },
          borderRadius: BorderRadius.circular(
            AppRadius.borderRadius,
          ),
          child: Container(
            height: 50.h,
            width: double.infinity,
            decoration: BoxDecoration(
              border: Border.all(
                color: AppDarkColor.instance.secondaryBorder,
              ),
              borderRadius: BorderRadius.circular(AppRadius.borderRadius),
            ),
            child: HomePadding(
              child: Align(
                alignment: Alignment.centerLeft,
                child: Row(
                  children: [
                    const Icon(IconlyLight.location),
                    SizedBox(width: 10.w),
                    BlocBuilder(
                      bloc: locationBloc,
                      builder: (context, state) {
                        if (state is LocationResultState) {
                          return Text(
                            state.placeName,
                            style: Theme.of(context).textTheme.labelLarge,
                          );
                        }
                        return Text(
                          'Location',
                          style: Theme.of(context).textTheme.bodyLarge,
                        );
                      },
                    ),
                  ],
                ),
              ),
            ),
          ),
        ),
      ],
    );
  }
}
