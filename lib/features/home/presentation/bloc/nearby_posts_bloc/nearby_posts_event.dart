part of 'nearby_posts_bloc.dart';

class NearbyPostsEvent extends Equatable {
  final double latitude;
  final double longitude;
  final String location;
  final String userId;

  const NearbyPostsEvent(this.userId, {
    required this.latitude,
    required this.longitude,
    required this.location,
  });

  @override
  List<Object> get props => [latitude, longitude];
}