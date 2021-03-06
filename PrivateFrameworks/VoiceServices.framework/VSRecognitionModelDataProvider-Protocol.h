/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol VSRecognitionModelDataProvider <NSObject>
- (int)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2;

@optional
- (void)stopReportingChanges;
- (void)beginReportingChanges;
- (BOOL)isCacheValidityIdentifierValid:(id)arg1;
- (id)cacheValidityIdentifier;
- (id)phoneticValueAtIndex:(int)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
- (BOOL)getValue:(id *)arg1 weight:(int *)arg2 atIndex:(int)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5;
- (id)valueAtIndex:(int)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
@end

