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

#import "FirebaseAuth/Sources/Public/FirebaseAuth/FIRMultiFactorResolver.h"

NS_ASSUME_NONNULL_BEGIN

@interface FIRMultiFactorResolver ()

@property(nonatomic) NSString *MFAPendingCredential;

- (instancetype)initWithMFAPendingCredential:(NSString *_Nullable)MFAPendingCredential
                                       hints:(NSArray<FIRMultiFactorInfo *> *)hints
                                        auth:(FIRAuth *)auth;

@end

NS_ASSUME_NONNULL_END

#endif
