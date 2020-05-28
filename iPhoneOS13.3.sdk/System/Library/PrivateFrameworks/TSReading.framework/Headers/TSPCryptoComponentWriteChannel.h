//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSPComponentWriteChannel-Protocol.h>

@protocol TSPComponentWriteChannel;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    id <TSPComponentWriteChannel> _writeChannel;
    struct _CCCryptor _cryptor;
    char _buffer;
    struct {
        unsigned int ctx[96];
    } _ccHmacContext;
}

// - (void).cxx_destruct;
- (void)close;
- (void)_writeData:(id)arg1 updateHmac:(BOOL)arg2;
- (void)writeData:(id)arg1;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2;

@end
