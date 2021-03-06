//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFGiphyContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
- (id)preferredFileType;
- (void)getPreferredFileSize:(id /* CDUnknownBlockType */)arg1;
- (void)generateObjectRepresentation:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(id /* CDUnknownBlockType */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)object;

@end

