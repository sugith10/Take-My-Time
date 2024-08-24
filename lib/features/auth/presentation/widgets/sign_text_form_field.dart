import 'package:flutter/material.dart';
import 'package:animate_do/animate_do.dart';

import '../../../../core/theme/color/app_colors.dart';

class SignTextField extends StatefulWidget {
  final TextEditingController controller;
  final String hintText;
  final TextInputType keyboardType;
  final bool obsecureText;
  final bool showSuffixIcon;
  final IconData? prefixIcon;
  final String? Function(String?)? validator;
  final FocusNode? focusNode;
  final String? errorMsg;
  final int fadeInDelay;
  final int fadeInDuration;

  const SignTextField({
    required this.controller,
    required this.hintText,
    required this.obsecureText,
    required this.keyboardType,
    required this.showSuffixIcon,
    this.fadeInDelay = 0,
    this.fadeInDuration = 0,
    this.prefixIcon,
    this.validator,
    this.focusNode,
    this.errorMsg,
    super.key,
  });

  @override
  State<SignTextField> createState() => _SignTextFieldState();
}

class _SignTextFieldState extends State<SignTextField> {
  late bool _obsecureText;

  @override
  void initState() {
    super.initState();
    _obsecureText = widget.obsecureText;
  }

  @override
  Widget build(BuildContext context) {
    return FadeInDown(
      delay: Duration(milliseconds: widget.fadeInDelay),
      duration: Duration(milliseconds: widget.fadeInDuration),
      child: TextFormField(
        cursorColor: AppDarkColor.instance.pure,
        cursorErrorColor: AppDarkColor.instance.pure,
        validator: widget.validator,
        controller: widget.controller,
        obscureText: _obsecureText,
        keyboardType: widget.keyboardType,
        focusNode: widget.focusNode,
        textInputAction: TextInputAction.next,
        decoration: InputDecoration(
          suffixIcon: widget.showSuffixIcon
              ? IconButton(
                  onPressed: () {
                    setState(() {
                      _obsecureText = !_obsecureText;
                    });
                  },
                  icon: Icon(
                    _obsecureText
                        ? Icons.visibility_outlined
                        : Icons.visibility_off_outlined,
                    color: AppDarkColor.instance.pure,
                  ),
                )
              : null,
          prefixIcon: widget.prefixIcon != null
              ? Icon(
                  widget.prefixIcon,
                  color: AppDarkColor.instance.pure,
                )
              : null,
          fillColor: Colors.grey.shade200,
          filled: true,
          hintText: widget.hintText,
          errorText: widget.errorMsg,
          errorStyle: Theme.of(context).textTheme.labelSmall,
        ),
        style: Theme.of(context).textTheme.labelLarge?.copyWith(
              color: AppDarkColor.instance.pure,
              fontWeight: FontWeight.w600,
            ),
      ),
    );
  }
}
