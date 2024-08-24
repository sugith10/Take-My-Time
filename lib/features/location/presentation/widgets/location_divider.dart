import 'package:flutter/material.dart';

import '../../../../core/widgets/home_padding.dart';


class LocationDivider extends StatelessWidget {
  const LocationDivider({
    super.key,
  });

  @override
  Widget build(BuildContext context) {
    return const HomePadding(
      child: Divider(
        color: Colors.white24,
      ),
    );
  }
}