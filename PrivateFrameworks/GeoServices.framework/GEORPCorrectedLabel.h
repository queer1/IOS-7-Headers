/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOMapRegion, NSString;

@interface GEORPCorrectedLabel : PBCodable
{
    CDStruct_3f74b7eb *_featureHandles;
    unsigned int _featureHandlesCount;
    unsigned int _featureHandlesSpace;
    NSString *_correctedValue;
    GEOMapRegion *_featureRegion;
    NSString *_originalValue;
}

@property(retain, nonatomic) GEOMapRegion *featureRegion; // @synthesize featureRegion=_featureRegion;
@property(retain, nonatomic) NSString *correctedValue; // @synthesize correctedValue=_correctedValue;
@property(retain, nonatomic) NSString *originalValue; // @synthesize originalValue=_originalValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setFeatureHandles:(CDStruct_3f74b7eb *)arg1 count:(unsigned int)arg2;
- (CDStruct_3f74b7eb)featureHandleAtIndex:(unsigned int)arg1;
- (void)addFeatureHandle:(CDStruct_3f74b7eb)arg1;
- (void)clearFeatureHandles;
@property(readonly, nonatomic) CDStruct_3f74b7eb *featureHandles;
@property(readonly, nonatomic) unsigned int featureHandlesCount;
@property(readonly, nonatomic) BOOL hasFeatureRegion;
@property(readonly, nonatomic) BOOL hasOriginalValue;
- (void)dealloc;

@end
