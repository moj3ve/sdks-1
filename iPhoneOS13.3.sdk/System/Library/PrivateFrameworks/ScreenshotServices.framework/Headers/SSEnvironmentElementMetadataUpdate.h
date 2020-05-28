//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class BSSettings, NSString, SSHarvestedApplicationMetadata;

@interface SSEnvironmentElementMetadataUpdate : NSObject <BSXPCCoding, SSLoggable>
{
    NSString *_environmentElementIdentifier;
    SSHarvestedApplicationMetadata *_metadata;
}

@property(retain, nonatomic) SSHarvestedApplicationMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *environmentElementIdentifier; // @synthesize environmentElementIdentifier=_environmentElementIdentifier;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *loggableDescription;
@property(readonly, nonatomic) BSSettings *bsSettings;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;

@end
