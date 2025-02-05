/*
 * Copyright 2019 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "FirebaseAuth/Sources/Backend/RPC/MultiFactor/Enroll/FIRFinalizeMFAEnrollmentRequest.h"

NS_ASSUME_NONNULL_BEGIN

static NSString *const kFinalizeMFAEnrollmentEndPoint = @"accounts/mfaEnrollment:finalize";

/** @var kTenantIDKey
    @brief The key for the tenant id value in the request.
 */
static NSString *const kTenantIDKey = @"tenantId";

@implementation FIRFinalizeMFAEnrollmentRequest

- (nullable instancetype)initWithIDToken:(NSString *)IDToken
                             displayName:(NSString *)displayName
                   phoneVerificationInfo:
                       (FIRAuthProtoFinalizeMFAPhoneRequestInfo *)phoneVerificationInfo
                    requestConfiguration:(FIRAuthRequestConfiguration *)requestConfiguration {
  self = [super initWithEndpoint:kFinalizeMFAEnrollmentEndPoint
            requestConfiguration:requestConfiguration];
  self.useIdentityPlatform = YES;
  if (self) {
    _IDToken = IDToken;
    _displayName = displayName;
    _phoneVerificationInfo = phoneVerificationInfo;
  }
  return self;
}

- (nullable instancetype)initWithIDToken:(NSString *)IDToken
                             displayName:(NSString *)displayName
                    TOTPVerificationInfo:
                        (FIRAuthProtoFinalizeMFATOTPEnrollmentRequestInfo *)TOTPVerificationInfo
                    requestConfiguration:(FIRAuthRequestConfiguration *)requestConfiguration {
  self = [super initWithEndpoint:kFinalizeMFAEnrollmentEndPoint
            requestConfiguration:requestConfiguration];
  self.useIdentityPlatform = YES;
  if (self) {
    _IDToken = IDToken;
    _displayName = displayName;
    _TOTPVerificationInfo = TOTPVerificationInfo;
  }
  return self;
}

- (nullable id)unencodedHTTPRequestBodyWithError:(NSError *__autoreleasing _Nullable *)error {
  NSMutableDictionary *postBody = [NSMutableDictionary dictionary];
  if (_IDToken) {
    postBody[@"idToken"] = _IDToken;
  }
  if (_displayName) {
    postBody[@"displayName"] = _displayName;
  }
  if (_phoneVerificationInfo) {
    postBody[@"phoneVerificationInfo"] = [_phoneVerificationInfo dictionary];
  } else if (_TOTPVerificationInfo) {
    postBody[@"totpVerificationInfo"] = [_TOTPVerificationInfo dictionary];
  }
  if (self.tenantID) {
    postBody[kTenantIDKey] = self.tenantID;
  }
  return [postBody copy];
}

@end

NS_ASSUME_NONNULL_END
