#ifndef THIRD_PARTY_UTF8_RANGE_UTF8_RANGE_H_
#define THIRD_PARTY_UTF8_RANGE_UTF8_RANGE_H_

#ifdef __cplusplus
extern "C" {
#endif

#if (defined(__ARM_NEON) && defined(__aarch64__)) || defined(__SSE4_1__)
int utf8_range2(const unsigned char* data, int len);
#else
int utf8_naive(const unsigned char* data, int len);
static inline int utf8_range2(const unsigned char* data, int len) {
  return utf8_naive(data, len);
}
#endif

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // THIRD_PARTY_UTF8_RANGE_UTF8_RANGE_H_
