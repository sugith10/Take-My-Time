import 'package:flutter/material.dart';

import '../../../../core/assets/app_png.dart';

class ScaleUpAnimationWidget extends StatefulWidget {
  const ScaleUpAnimationWidget({super.key});

  @override
  State<ScaleUpAnimationWidget> createState() => _ScaleUpAnimationWidgetState();
}

class _ScaleUpAnimationWidgetState extends State<ScaleUpAnimationWidget>
    with SingleTickerProviderStateMixin {
  late AnimationController _controller;
  late Animation<double> _animation;

  @override
  void initState() {
    super.initState();
    _controller = AnimationController(
      duration: const Duration(seconds: 3),
      vsync: this,
    );

    _animation = Tween<double>(begin: 0.35, end: 1).animate(CurvedAnimation(
      parent: _controller,
      curve: Curves.easeInOutCirc,
    ));

    _controller.forward();
  }

  @override
  void dispose() {
    _controller.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return AnimatedBuilder(
      animation: _animation,
      builder: (context, child) {
        return Transform.scale(
          scale: _animation.value,
          child: child,
        );
      },
      child: Image.asset(AppPng.success),
    );
  }
}
