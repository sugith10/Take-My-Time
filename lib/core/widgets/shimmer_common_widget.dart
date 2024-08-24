import 'package:flutter/material.dart';
import 'package:shimmer_pro/shimmer_pro.dart';
import 'package:take_my_tym/core/theme/color/app_colors.dart';

class ShimmerCommonWidget extends StatelessWidget {
  const ShimmerCommonWidget({super.key});

  @override
  Widget build(BuildContext context) {
    return ShimmerPro.text(
      maxLine: 2,
      light: ShimmerProLight.lighter,
      width: 450,
      scaffoldBackgroundColor: AppDarkColor.instance.background,
    );
  }
}
