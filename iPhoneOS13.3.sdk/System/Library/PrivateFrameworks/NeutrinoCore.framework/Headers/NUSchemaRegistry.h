//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NUSchemaRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary _schemas;
    NSMutableDictionary _versions;
}

+ (id)sharedRegistry;
// - (void).cxx_destruct;
- (id)_allVersionsWithOriginalIdentifier:(id)arg1 upToVersion:(id)arg2;
- (id)versionsCompatibleWithIdentifier:(id)arg1;
- (id)_latestVersionWithOriginalIdentifier:(id)arg1;
- (id)latestVersionWithNameSpace:(id)arg1 name:(id)arg2;
- (id)_schemaWithIdentifier:(id)arg1;
- (id)schemaWithIdentifier:(id)arg1;
- (BOOL)registerSchemas:(id)arg1 error:(out id )arg2;
- (BOOL)_registerVersion:(id)arg1 withOriginalIdentifier:(id)arg2 error:(out id )arg3;
- (BOOL)_registerSchema:(id)arg1 error:(out id )arg2;
- (BOOL)registerSchema:(id)arg1 error:(out id )arg2;
- (void)_registerBuiltInSchemas;
- (id)init;

@end
