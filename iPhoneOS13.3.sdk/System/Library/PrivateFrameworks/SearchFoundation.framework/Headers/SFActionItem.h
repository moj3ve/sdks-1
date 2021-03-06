//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/SFActionItem-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@interface SFActionItem : NSObject <SFActionItem, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isOverlay:1;
        unsigned int requiresLocalMedia:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int isITunes:1;
        unsigned int mediaEntityType:1;
    } _has;
    BOOL _isOverlay;
    BOOL _requiresLocalMedia;
    BOOL _isITunes;
    int _mediaEntityType;
    NSString *_label;
    NSString *_labelForLocalMedia;
    NSArray *_storeIdentifiers;
    NSString *_localMediaIdentifier;
    SFPunchout *_punchout;
    NSString *_applicationBundleIdentifier;
    NSString *_contactIdentifier;
    NSString *_phoneNumber;
    NSString *_email;
    NSData *_mapsData;
    double _latitude;
    double _longitude;
    NSString *_provider;
    NSString *_offerType;
    NSString *_type;
    NSString *_labelITunes;
    SFImage *_icon;
    SFImage *_baseIcon;
    SFLatLng *_location;
    NSString *_messageIdentifier;
    NSURL *_messageURL;
    NSString *_persistentID;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(copy, nonatomic) NSURL *messageURL; // @synthesize messageURL=_messageURL;
@property(copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) SFLatLng *location; // @synthesize location=_location;
@property(retain, nonatomic) SFImage *baseIcon; // @synthesize baseIcon=_baseIcon;
@property(retain, nonatomic) SFImage *icon; // @synthesize icon=_icon;
@property(nonatomic) BOOL isITunes; // @synthesize isITunes=_isITunes;
@property(copy, nonatomic) NSString *labelITunes; // @synthesize labelITunes=_labelITunes;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *offerType; // @synthesize offerType=_offerType;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(copy, nonatomic) NSString *localMediaIdentifier; // @synthesize localMediaIdentifier=_localMediaIdentifier;
@property(nonatomic) BOOL requiresLocalMedia; // @synthesize requiresLocalMedia=_requiresLocalMedia;
@property(copy, nonatomic) NSArray *storeIdentifiers; // @synthesize storeIdentifiers=_storeIdentifiers;
@property(nonatomic) BOOL isOverlay; // @synthesize isOverlay=_isOverlay;
@property(copy, nonatomic) NSString *labelForLocalMedia; // @synthesize labelForLocalMedia=_labelForLocalMedia;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasMediaEntityType;
- (BOOL)hasIsITunes;
- (BOOL)hasLongitude;
- (BOOL)hasLatitude;
- (BOOL)hasRequiresLocalMedia;
- (BOOL)hasIsOverlay;
- (id)initWithProtobuf:(id)arg1;

@end

