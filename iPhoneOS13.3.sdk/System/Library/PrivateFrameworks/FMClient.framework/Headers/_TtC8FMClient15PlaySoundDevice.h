//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class MISSING_TYPE, NSString;

@interface _TtC8FMClient15PlaySoundDevice : NSObject <NSSecureCoding>
{
    MISSING_TYPE *serverId;
    MISSING_TYPE *locality;
    MISSING_TYPE *safetyWarningConfirmed;
}

+ (BOOL)supportsSecureCoding;
+ (id)PlaySoundDeviceLocalityUnknown;
+ (id)PlaySoundDeviceLocalityRemote;
+ (id)PlaySoundDeviceLocalityLocal;
// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithServerId:(id)arg1 locality:(id)arg2 safetyWarningConfirmed:(BOOL)arg3;
@property(nonatomic, readonly) BOOL safetyWarningConfirmed; // @synthesize safetyWarningConfirmed;
@property(nonatomic, readonly) NSString *locality;
@property(nonatomic, readonly) NSString *serverId;

@end
