/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVOutputSettings, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputConfigurationState : NSObject
{
    NSString *_mediaType;
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    BOOL _attachedToPixelBufferAdaptor;
    NSArray *_metadataItems;
    struct CGAffineTransform _transform;
    int _mediaTimeScale;
    BOOL _expectsMediaDataInRealTime;
    struct CGSize _naturalSize;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    BOOL _marksOutputTrackAsEnabled;
    BOOL _hasClientSpecifiedValueForPreferredVolume;
    float _preferredVolume;
    BOOL _hasClientSpecifiedValueForLayer;
    int _layer;
    short _alternateGroupID;
    NSDictionary *_trackReferences;
}

@property(copy, nonatomic) NSDictionary *trackReferences; // @synthesize trackReferences=_trackReferences;
@property(nonatomic) short alternateGroupID; // @synthesize alternateGroupID=_alternateGroupID;
@property(nonatomic) int layer; // @synthesize layer=_layer;
@property(nonatomic) BOOL hasClientSpecifiedValueForLayer; // @synthesize hasClientSpecifiedValueForLayer=_hasClientSpecifiedValueForLayer;
@property(nonatomic) float preferredVolume; // @synthesize preferredVolume=_preferredVolume;
@property(nonatomic) BOOL hasClientSpecifiedValueForPreferredVolume; // @synthesize hasClientSpecifiedValueForPreferredVolume=_hasClientSpecifiedValueForPreferredVolume;
@property(nonatomic) BOOL marksOutputTrackAsEnabled; // @synthesize marksOutputTrackAsEnabled=_marksOutputTrackAsEnabled;
@property(copy, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=_naturalSize;
@property(nonatomic) BOOL expectsMediaDataInRealTime; // @synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime;
@property(nonatomic) int mediaTimeScale; // @synthesize mediaTimeScale=_mediaTimeScale;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(nonatomic) BOOL attachedToPixelBufferAdaptor; // @synthesize attachedToPixelBufferAdaptor=_attachedToPixelBufferAdaptor;
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes; // @synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes;
@property(retain, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint; // @synthesize sourceFormatHint=_sourceFormatHint;
@property(copy, nonatomic) AVOutputSettings *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void)dealloc;

@end

