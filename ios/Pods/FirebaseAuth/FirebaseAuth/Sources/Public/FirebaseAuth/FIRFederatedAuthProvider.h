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

#import <Foundation/Foundation.h>

#import "FIRAuthUIDelegate.h"

@class FIRAuthCredential;

NS_ASSUME_NONNULL_BEGIN

/**
    Utility type for constructing federated auth provider credentials.
 */
NS_SWIFT_NAME(FederatedAuthProvider)
@protocol FIRFederatedAuthProvider <NSObject>

/** @typedef FIRAuthCredentialCallback
    @brief The type of block invoked when obtaining an auth credential.
    @param credential The credential obtained.
    @param error The error that occurred if any.
 */
typedef void (^FIRAuthCredentialCallback)(FIRAuthCredential *_Nullable credential,
                                          NSError *_Nullable error)
    NS_SWIFT_UNAVAILABLE("Use Swift's closure syntax instead.");

/** @fn getCredentialWithUIDelegate:completion:
    @brief Used to obtain an auth credential via a mobile web flow.
        This method is available on iOS only.
    @param UIDelegate An optional UI delegate used to present the mobile web flow.
    @param completion Optionally; a block which is invoked asynchronously on the main thread when
        the mobile web flow is completed.
 */
- (void)getCredentialWithUIDelegate:(nullable id<FIRAuthUIDelegate>)UIDelegate
                         completion:(nullable void (^)(FIRAuthCredential *_Nullable credential,
                                                       NSError *_Nullable error))completion
    API_UNAVAILABLE(macos,
                    tvos,
                    watchos
#if defined(TARGET_OS_VISION)
                    ,
                    visionos
#endif  // defined(TARGET_OS_VISION)
    );

@end

NS_ASSUME_NONNULL_END
