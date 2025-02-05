// Copyright 2019 Google
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/** The class wraps `NSKeyedArchiver` and `NSKeyedUnarchiver` API to provide a unified secure coding
 *  methods for iOS versions before and after 11.
 */
@interface GULSecureCoding : NSObject

+ (nullable id)unarchivedObjectOfClasses:(NSSet<Class> *)classes
                                fromData:(NSData *)data
                                   error:(NSError **)outError;

+ (nullable id)unarchivedObjectOfClass:(Class)aClass
                              fromData:(NSData *)data
                                 error:(NSError **)outError;

+ (nullable NSData *)archivedDataWithRootObject:(id<NSCoding>)object error:(NSError **)outError;

@end

NS_ASSUME_NONNULL_END
