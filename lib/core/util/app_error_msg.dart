/// Represents an alert message to be displayed in the UI, used in the custom SnacBar Widget.
class AppAlert {
  /// The title of the alert.
  ///
  /// Defaults to 'Oops!'.
  final String alert;

  /// Details or description of the alert.
  ///
  /// Defaults to 'An unexpected error occurred. Please try again...'.
  final String details;

  AppAlert({
    this.alert = 'Oops!',
    this.details = 'An unexpected error occurred. Please try again...',
  });
}
