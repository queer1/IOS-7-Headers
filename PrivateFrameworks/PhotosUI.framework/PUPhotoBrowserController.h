/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLDismissableViewController.h"
#import "PLPhotoBrowserControllerDelegate.h"
#import "PUCollectionViewLayoutProvider.h"
#import "PUPhotosSharingTransitionDelegate.h"
#import "PUPhotosSharingViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDictionary, PLCloudSharedComment, PLLibraryImageDataProvider, PLManagedAsset, PLPhotoBrowserController, PLSlalomRegionEditor, PUActivityViewController, PUPhotoBrowserControllerSpec, PUPhotosSharingViewController, PUTransitionPinchGestureRecognizer, UIColor, UIImage, UIMovieScrubber, UIPopoverController, _UINavigationControllerPalette;

@interface PUPhotoBrowserController : UIViewController <PLPhotoBrowserControllerDelegate, PUPhotosSharingViewControllerDelegate, PUPhotosSharingTransitionDelegate, UIGestureRecognizerDelegate, PUCollectionViewLayoutProvider, PLDismissableViewController>
{
    PUPhotoBrowserControllerSpec *_spec;
    PLPhotoBrowserController *_legacyPhotoBrowserController;
    UIPopoverController *_popoverController;
    PUTransitionPinchGestureRecognizer *_pinchGesture;
    NSDictionary *_barButtons;
    _UINavigationControllerPalette *_videoScrubberPalette;
    UIMovieScrubber *_videoScrubber;
    PLSlalomRegionEditor *_slalomRegionEditor;
    BOOL _editingVideo;
    BOOL _editingComments;
    PUPhotosSharingViewController *_sharingViewController;
    BOOL _shouldShowOverlaysWhenViewAppears;
    BOOL _photoBackgroundHidden;
    BOOL _overlaysVisible;
    PLCloudSharedComment *_initialComment;
    id <PUPhotoBrowserControllerDelegate> _delegate;
    PUActivityViewController *__activityViewController;
}

@property(retain, nonatomic, setter=_setActivityViewController:) PUActivityViewController *_activityViewController; // @synthesize _activityViewController=__activityViewController;
@property(nonatomic, getter=areOverlaysVisible, setter=_setOverlaysVisible:) BOOL overlaysVisible; // @synthesize overlaysVisible=_overlaysVisible;
@property(nonatomic, getter=isPhotoBackgroundHidden) BOOL photoBackgroundHidden; // @synthesize photoBackgroundHidden=_photoBackgroundHidden;
@property(nonatomic) __weak id <PUPhotoBrowserControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PLCloudSharedComment *initialComment; // @synthesize initialComment=_initialComment;
@property(nonatomic) BOOL shouldShowOverlaysWhenViewAppears; // @synthesize shouldShowOverlaysWhenViewAppears=_shouldShowOverlaysWhenViewAppears;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)photosSharingTransition:(id)arg1 viewForTransitionWithCollections:(id)arg2;
- (void)photosSharingTransition:(id)arg1 setVisibility:(BOOL)arg2 forKeyAssetIndexPath:(id)arg3 inCollections:(id)arg4;
- (struct CGPoint)photosSharingTransition:(id)arg1 contentOffsetForKeyAssetIndexPath:(id)arg2 inCollections:(id)arg3;
- (id)photosSharingTransition:(id)arg1 layoutForKeyAssetIndexPath:(id)arg2 inCollections:(id)arg3;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1 allowZoom:(BOOL)arg2;
- (void)photosSharingViewControllerDidCancel:(id)arg1;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3;
- (void)_dismissSharingViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (void)libraryDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2;
- (void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2;
- (void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2;
- (void)photoBrowserController:(id)arg1 didPrepareVideoScrubber:(id)arg2 slalomRegionEditor:(id)arg3;
- (void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1;
- (void)photoBrowserController:(id)arg1 photoTile:(id)arg2 didCompleteZoomWithScale:(float)arg3;
- (void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(BOOL)arg2;
- (void)photoBrowserController:(id)arg1 overlayVisibilityWillChangeTo:(BOOL)arg2 withDuration:(double)arg3;
- (void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
- (void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
- (void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2;
- (void)_setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_applicationWillEnterForgroundHandler:(id)arg1;
- (void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(BOOL)arg2 animated:(BOOL)arg3;
- (id)photoBrowserControllerMakeToolbar:(id)arg1;
- (id)photoBrowserControllerMakeNavigationBar:(id)arg1;
- (void)photoBrowserControllerDidScroll:(id)arg1;
- (void)_updateVideoScrubberOffset;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_updateBarItemsAnimated:(BOOL)arg1;
- (void)_updateVideoScrubber:(id)arg1 slalomRegionEditor:(id)arg2;
- (void)_updateVideoScrubberToScrubberForCurrentVideoView;
- (void)_updateBarsForItemsInToolbarAnimated:(BOOL)arg1;
- (void)_updateBarsForItemsInNavigationBarAnimated:(BOOL)arg1;
- (void)_updateBarsForCommentsEditingAnimated:(BOOL)arg1;
- (void)_updateBarsForVideoEditingAnimated:(BOOL)arg1;
- (void)_setupStandardNavigationItem:(id)arg1;
- (BOOL)_canShowCommentsForCurrentAsset;
- (id)_actionItemsForCurrentAsset;
- (BOOL)_allowsEditingCurrentAsset;
- (BOOL)_currentAssetIsRemote;
- (BOOL)_currentAssetIsMedia;
- (id)_videoTrimSaveItem;
- (id)_barButtonForIdentifier:(id)arg1;
- (void)_cancelTrimmedVideo:(id)arg1;
- (void)_saveTrimmedVideo:(id)arg1;
- (void)_returnToCamera:(id)arg1;
- (void)_pauseCurrentMedia:(id)arg1;
- (void)_playCurrentMedia:(id)arg1;
- (void)_showAirplayPicker:(id)arg1;
- (void)_startSlideshow:(id)arg1;
- (void)_removeCurrentItem:(id)arg1;
- (void)_deleteCurrentItem:(id)arg1;
- (void)_displayMoreSheet:(id)arg1;
- (id)_additionalMoreActivities;
- (id)_moreActivityOrdering;
- (BOOL)_dismissLegacyPopovers;
- (void)_displayShareSheet:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateBackgroundColor;
@property(readonly, nonatomic) UIColor *photoBackgroundColor;
@property(readonly, nonatomic) PLLibraryImageDataProvider *imageDataProvider;
- (void)didEndNavigationOperation:(int)arg1 inNavigationController:(id)arg2;
- (void)willBeginNavigationOperation:(int)arg1 inNavigationController:(id)arg2;
@property(readonly, nonatomic) UIImage *photoImage;
@property(readonly, nonatomic) struct CGRect photoFrame;
- (void)setPhoto:(id)arg1 inCollection:(id)arg2;
@property(nonatomic) BOOL deletesDuplicatesWhenNecessary;
@property(nonatomic) BOOL shouldPlayVideoWhenViewAppears;
@property(readonly, nonatomic) id <PLAssetContainerList> assetContainerList;
@property(readonly, nonatomic) id <PLAssetContainer> currentAssetContainer;
- (id)_currentTile;
@property(readonly, nonatomic) PLManagedAsset *currentAsset;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(BOOL)arg1;
- (void)setDoneItem:(id)arg1;
- (void)_revealComments;
- (id)contentScrollView;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 assetAtIndexPath:(id)arg2 inAssetContainerList:(id)arg3;

@end

