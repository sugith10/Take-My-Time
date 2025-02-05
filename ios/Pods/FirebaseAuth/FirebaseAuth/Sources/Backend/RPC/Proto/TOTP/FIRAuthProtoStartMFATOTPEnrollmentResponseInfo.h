/*
 * Copyright 2023 Google LLC
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

#import "FirebaseAuth/Sources/Backend/RPC/Proto/FIRAuthProto.h"

NS_ASSUME_NONNULL_BEGIN

@interface FIRAuthProtoStartMFATOTPEnrollmentResponseInfo : NSObject <FIRAuthProto>

@property(nonatomic, copy, readonly, nonnull) NSString *sharedSecretKey;
@property(nonatomic, readonly) NSInteger verificationCodeLength;
@property(nonatomic, copy, readonly, nullable) NSString *hashingAlgorithm;
@property(nonatomic, readonly) NSInteger periodSec;
@property(nonatomic, copy, readonly, nullable) NSString *sessionInfo;
@property(nonatomic, copy, readonly, nullable) NSDate *finalizeEnrollmentTime;

@end

NS_ASSUME_NONNULL_END
