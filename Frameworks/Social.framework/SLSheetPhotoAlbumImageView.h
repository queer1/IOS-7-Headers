/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Social/SLSheetPreviewImageView.h>

@class CALayer, NSMutableArray, UILabel;

__attribute__((visibility("hidden")))
@interface SLSheetPhotoAlbumImageView : SLSheetPreviewImageView
{
    CALayer *_frameLayer;
    CALayer *_glossLayer;
    NSMutableArray *_frameViews;
    int _frameQuantity;
    int _imageQuantity;
    int _numPreviewImagesAdded;
    UILabel *_imageCountLabel;
    BOOL _updateLayout;
}

+ (unsigned int)displayedFrameMaximum;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (void)sizeToFit;
- (struct CGSize)_currentSize;
- (id)_imageCountString;
- (BOOL)_shouldDisplayImageCountLabel;
- (void)addPreviewImage:(id)arg1;
- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;
- (void)barMetricsDidChange;
- (id)initWithPrincipalAttachments:(id)arg1;

@end

