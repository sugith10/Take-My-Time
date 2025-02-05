/*
 * Copyright 2019 Google LLC
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

#if TARGET_OS_IOS || TARGET_OS_TV || (defined(TARGET_OS_VISION) && TARGET_OS_VISION)

#import <UIKit/UIKit.h>

#define GULApplication UIApplication
#define GULApplicationDelegate UIApplicationDelegate
#define GULUserActivityRestoring UIUserActivityRestoring

static NSString *const kGULApplicationClassName = @"UIApplication";

#elif TARGET_OS_OSX

#import <AppKit/AppKit.h>

#define GULApplication NSApplication
#define GULApplicationDelegate NSApplicationDelegate
#define GULUserActivityRestoring NSUserActivityRestoring

static NSString *const kGULApplicationClassName = @"NSApplication";

#elif TARGET_OS_WATCH

#import <WatchKit/WatchKit.h>

// We match the according watchOS API but swizzling should not work in watch
#define GULApplication WKExtension
#define GULApplicationDelegate WKExtensionDelegate
#define GULUserActivityRestoring NSUserActivityRestoring

static NSString *const kGULApplicationClassName = @"WKExtension";

#endif
