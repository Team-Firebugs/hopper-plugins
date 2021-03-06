//
// Hopper Disassembler SDK
//
// (c) Cryptic Apps SARL. All Rights Reserved.
// https://www.hopperapp.com
//
// THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
// KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//

#import <Foundation/Foundation.h>
#import "CommonTypes.h"

#define HOPPER_CURRENT_SDK_VERSION  1

@class HopperUUID;
@protocol HPHopperServices;

@protocol HopperPlugin <NSObject>

- (instancetype)initWithHopperServices:(NSObject<HPHopperServices> *)services;

/// Should return the HOPPER_CURRENT_SDK_VERSION constant.
/// This is used by Hopper to know the SDK version which was used when the plugin was compiled.
+ (int)sdkVersion;

- (HopperUUID *)pluginUUID;
- (HopperPluginType)pluginType;

- (NSString *)pluginName;
- (NSString *)pluginDescription;
- (NSString *)pluginAuthor;
- (NSString *)pluginCopyright;
- (NSString *)pluginVersion;

/// Returns a string identifying the plugin for the command line tool.
/// For instance, the Mach-O loader returns "Mach-O".
/// You should avoid spaces in order to avoid quotes in the command line.
- (NSString *)commandLineIdentifier;

@end
