//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSTNumberNode : TSTExpressionNode
{
    NSString *_string;
    struct TSUDecimal _number;
}

@property(readonly) struct TSUDecimal number; // @synthesize number=_number;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)saveToArchive:(struct NumberNodeArchive )arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct NumberNodeArchive )arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray )arg1 hostCell:(struct TSUCellCoord)arg2 symbolTable:(struct TSCESymbolTable )arg3;
- (id)exportString;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (struct TSCEFunctionArgSpec )argumentSpec;
@property(retain, nonatomic) NSString *string;
- (int)tokenType;
- (void)fixStorageLanguage:(id)arg1;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg1;
- (void)setNumber:(const struct TSUDecimal )arg1 withLocale:(id)arg2;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(NSUInteger)arg3 lastIndex:(NSUInteger)arg4;
- (id)initWithContext:(id)arg1 string:(id)arg2 locale:(id)arg3 firstIndex:(NSUInteger)arg4 lastIndex:(NSUInteger)arg5;
- (id)initWithContext:(id)arg1 number:(const struct TSUDecimal )arg2 locale:(id)arg3 firstIndex:(NSUInteger)arg4 lastIndex:(NSUInteger)arg5;
- (id)initWithContext:(id)arg1 number:(const struct TSUDecimal )arg2 string:(id)arg3 firstIndex:(NSUInteger)arg4 lastIndex:(NSUInteger)arg5;

@end

