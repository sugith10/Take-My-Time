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

#import <TargetConditionals.h>
#if TARGET_OS_IOS

#import "FirebaseAuth/Sources/Public/FirebaseAuth/FIRMultiFactorInfo.h"

#import "FirebaseAuth/Sources/Backend/RPC/Proto/FIRAuthProtoMFAEnrollment.h"

NS_ASSUME_NONNULL_BEGIN

@interface FIRMultiFactorInfo () {
 @protected
  NSString *_factorID;
}

- (instancetype)initWithProto:(FIRAuthProtoMFAEnrollment *)proto;

#pragma mark - NSSecureCoding
// Note that we're not able to indicate FIRMultiFactorInfo conforming to NSSecureCoding in an
// internal header file, so the following NSSecureCoding methods are explicitly declared.

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder;

- (void)encodeWithCoder:(NSCoder *)aCoder;

@end

NS_ASSUME_NONNULL_END

#endif
