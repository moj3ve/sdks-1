//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchema : NSObject
{
    AMSSQLiteConnection *_connection;
}

// - (void).cxx_destruct;
- (void)_setUserVersion:(long long)arg1;
- (BOOL)tableExists:(id)arg1;
- (BOOL)migrateToVersion:(long long)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
@property(readonly) long long currentUserVersion;
- (BOOL)column:(id)arg1 existsInTable:(id)arg2;
- (id)initWithConnection:(id)arg1;

@end

