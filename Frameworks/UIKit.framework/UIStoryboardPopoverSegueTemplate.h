/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSArray, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate
{
    unsigned int _permittedArrowDirections;
    NSArray *_passthroughViews;
    UIBarButtonItem *_anchorBarButtonItem;
    UIView *_anchorView;
}

@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem; // @synthesize anchorBarButtonItem=_anchorBarButtonItem;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) unsigned int permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
- (id)segueWithDestinationViewController:(id)arg1;
- (id)defaultSegueClassName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

