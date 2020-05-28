//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRParser-Protocol.h>

@class TXRImageInfo, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRParserImageIO : NSObject <TXRParser>
{
    TXRTextureInfo *_textureInfo;
    TXRImageInfo *_imageInfo;
}

+ (CGImage )newCGImageFromImage:(id)arg1 colorSpace:(CGColorSpace )arg2 error:(id )arg3;
+ (BOOL)exportImage:(id)arg1 url:(id)arg2 uttype:(const struct __CFString )arg3 colorSpace:(CGColorSpace )arg4 orientation:(unsigned char)arg5 error:(id )arg6;
+ (BOOL)exportTexture:(id)arg1 url:(id)arg2 error:(id )arg3;
+ (id)decodeCGImageNonIndexed:(CGImage )arg1 desiredPixelFormat:(NSUInteger)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id )arg5;
+ (id)decodeCGImage:(CGImage )arg1 desiredPixelFormat:(NSUInteger)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id )arg5;
+ (int)determineColorSpaceClass:(CGImage )arg1 displayGamut:(NSUInteger)arg2 options:(id)arg3;
+ (BOOL)handlesData:(id)arg1;
@property(readonly, nonatomic) TXRTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
// - (void).cxx_destruct;
- (id)parsedImageAtLevel:(NSUInteger)arg1 element:(NSUInteger)arg2 face:(NSUInteger)arg3;
- (BOOL)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id )arg4;

@end
