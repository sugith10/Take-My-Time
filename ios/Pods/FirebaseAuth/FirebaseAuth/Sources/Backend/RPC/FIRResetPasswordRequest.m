/*
 * Copyright 2017 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "FirebaseAuth/Sources/Backend/RPC/FIRResetPasswordRequest.h"

NS_ASSUME_NONNULL_BEGIN

/** @var kResetPasswordEndpoint
    @brief The "resetPassword" endpoint.
 */
static NSString *const kResetPasswordEndpoint = @"resetPassword";

/** @var kOOBCodeKey
    @brief The "resetPassword" key.
 */
static NSString *const kOOBCodeKey = @"oobCode";

/** @var kCurrentPasswordKey
    @brief The "newPassword" key.
 */
static NSString *const kCurrentPasswordKey = @"newPassword";

/** @var kTenantIDKey
    @brief The key for the tenant id value in the request.
 */
static NSString *const kTenantIDKey = @"tenantId";

@implementation FIRResetPasswordRequest

- (nullable instancetype)initWithOobCode:(NSString *)oobCode
                             newPassword:(nullable NSString *)newPassword
                    requestConfiguration:(FIRAuthRequestConfiguration *)requestConfiguration {
  self = [super initWithEndpoint:kResetPasswordEndpoint requestConfiguration:requestConfiguration];
  if (self) {
    _oobCode = oobCode;
    _updatedPassword = newPassword;
  }
  return self;
}

- (nullable id)unencodedHTTPRequestBodyWithError:(NSError *_Nullable *_Nullable)error {
  NSMutableDictionary *postBody = [NSMutableDictionary dictionary];
  postBody[kOOBCodeKey] = _oobCode;
  if (_updatedPassword) {
    postBody[kCurrentPasswordKey] = _updatedPassword;
  }
  if (self.tenantID) {
    postBody[kTenantIDKey] = self.tenantID;
  }
  return [postBody copy];
}

@end

NS_ASSUME_NONNULL_END
