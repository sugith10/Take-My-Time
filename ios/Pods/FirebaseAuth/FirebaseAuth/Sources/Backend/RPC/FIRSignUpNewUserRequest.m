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

#import "FirebaseAuth/Sources/Backend/RPC/FIRSignUpNewUserRequest.h"

NS_ASSUME_NONNULL_BEGIN

/** @var kSignupNewUserEndpoint
    @brief The "SingupNewUserEndpoint" endpoint.
 */
static NSString *const kSignupNewUserEndpoint = @"signupNewUser";

/** @var kEmailKey
    @brief The key for the "email" value in the request.
 */
static NSString *const kEmailKey = @"email";

/** @var kPasswordKey
    @brief The key for the "password" value in the request.
 */
static NSString *const kPasswordKey = @"password";

/** @var kDisplayNameKey
    @brief The key for the "kDisplayName" value in the request.
 */
static NSString *const kDisplayNameKey = @"displayName";

/** @var kIDToken
    @brief The key for the "kIDToken" value in the request.
 */
static NSString *const kIDToken = @"idToken";

/** @var kCaptchaResponseKey
    @brief The key for the "captchaResponse" value in the request.
 */
static NSString *const kCaptchaResponseKey = @"captchaResponse";

/** @var kClientType
    @brief The key for the "clientType" value in the request.
 */
static NSString *const kClientType = @"clientType";

/** @var kRecaptchaVersion
    @brief The key for the "recaptchaVersion" value in the request.
 */
static NSString *const kRecaptchaVersion = @"recaptchaVersion";

/** @var kReturnSecureTokenKey
    @brief The key for the "returnSecureToken" value in the request.
 */
static NSString *const kReturnSecureTokenKey = @"returnSecureToken";

/** @var kTenantIDKey
    @brief The key for the tenant id value in the request.
 */
static NSString *const kTenantIDKey = @"tenantId";

@implementation FIRSignUpNewUserRequest

- (nullable instancetype)initWithEmail:(nullable NSString *)email
                              password:(nullable NSString *)password
                           displayName:(nullable NSString *)displayName
                               idToken:(nullable NSString *)idToken
                  requestConfiguration:(FIRAuthRequestConfiguration *)requestConfiguration {
  self = [super initWithEndpoint:kSignupNewUserEndpoint requestConfiguration:requestConfiguration];
  if (self) {
    _email = [email copy];
    _password = [password copy];
    _displayName = [displayName copy];
    _idToken = [idToken copy];
    _returnSecureToken = YES;
  }
  return self;
}

- (nullable instancetype)initWithRequestConfiguration:
    (FIRAuthRequestConfiguration *)requestConfiguration {
  self = [self initWithEmail:nil
                    password:nil
                 displayName:nil
                     idToken:nil
        requestConfiguration:requestConfiguration];
  return self;
}

- (nullable id)unencodedHTTPRequestBodyWithError:(NSError *_Nullable *_Nullable)error {
  NSMutableDictionary *postBody = [NSMutableDictionary dictionary];
  if (_email) {
    postBody[kEmailKey] = _email;
  }
  if (_password) {
    postBody[kPasswordKey] = _password;
  }
  if (_displayName) {
    postBody[kDisplayNameKey] = _displayName;
  }
  if (_idToken) {
    postBody[kIDToken] = _idToken;
  }
  if (_captchaResponse) {
    postBody[kCaptchaResponseKey] = _captchaResponse;
  }
  if (self.clientType) {
    postBody[kClientType] = self.clientType;
  }
  if (_recaptchaVersion) {
    postBody[kRecaptchaVersion] = _recaptchaVersion;
  }
  if (_returnSecureToken) {
    postBody[kReturnSecureTokenKey] = @YES;
  }
  if (self.tenantID) {
    postBody[kTenantIDKey] = self.tenantID;
  }
  return [postBody copy];
}

- (void)injectRecaptchaFields:(NSString *_Nullable)recaptchaResponse
             recaptchaVersion:(NSString *)recaptchaVersion {
  _captchaResponse = recaptchaResponse;
  _recaptchaVersion = recaptchaVersion;
}

@end

NS_ASSUME_NONNULL_END
