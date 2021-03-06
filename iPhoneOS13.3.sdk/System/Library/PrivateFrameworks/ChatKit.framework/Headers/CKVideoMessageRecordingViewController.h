//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKActionMenuControllerDelegate-Protocol.h>
#import <ChatKit/CKVideoRecorderDelegate-Protocol.h>

@class CKActionMenuController, CKActionMenuItem, CKMediaObject, CKRecordingElapsedTimeView, NSError, UIButton, UIImagePickerController, UIView, UIWindow;
@protocol CKVideoMessageRecordingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKVideoMessageRecordingViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CKActionMenuControllerDelegate, CKVideoRecorderDelegate>
{
    UIView *_presentationView;
    UIWindow *_overlayWindow;
    BOOL _presented;
    BOOL _previewWarmedUp;
    BOOL _showingVideo;
    BOOL _recording;
    BOOL _sending;
    BOOL _canceled;
    BOOL _triedToRecord;
    id <CKVideoMessageRecordingViewControllerDelegate> _videoMessageDelegate;
    UIView *_topBackgroundView;
    CKRecordingElapsedTimeView *_timerView;
    CKActionMenuController *_videoActionMenuController;
    CKActionMenuItem *_photoMenuItem;
    UIButton *_swapCameraButton;
    NSUInteger _enableCancel;
    CKMediaObject *_mediaObjectForSending;
    NSError *_captureError;
    id /* CDUnknownBlockType */ _mediaExportCompletionBlock;
    UIImagePickerController *_cameraViewController;
}

@property(retain, nonatomic) UIImagePickerController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(copy, nonatomic) id /* CDUnknownBlockType */ mediaExportCompletionBlock; // @synthesize mediaExportCompletionBlock=_mediaExportCompletionBlock;
@property(retain, nonatomic) NSError *captureError; // @synthesize captureError=_captureError;
@property(retain, nonatomic) CKMediaObject *mediaObjectForSending; // @synthesize mediaObjectForSending=_mediaObjectForSending;
@property(nonatomic) NSUInteger enableCancel; // @synthesize enableCancel=_enableCancel;
@property(nonatomic) BOOL triedToRecord; // @synthesize triedToRecord=_triedToRecord;
@property(nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property(nonatomic) BOOL sending; // @synthesize sending=_sending;
@property(nonatomic) BOOL recording; // @synthesize recording=_recording;
@property(retain, nonatomic) UIButton *swapCameraButton; // @synthesize swapCameraButton=_swapCameraButton;
@property(retain, nonatomic) CKActionMenuItem *photoMenuItem; // @synthesize photoMenuItem=_photoMenuItem;
@property(retain, nonatomic) CKActionMenuController *videoActionMenuController; // @synthesize videoActionMenuController=_videoActionMenuController;
@property(retain, nonatomic) CKRecordingElapsedTimeView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(nonatomic) __weak id <CKVideoMessageRecordingViewControllerDelegate> videoMessageDelegate; // @synthesize videoMessageDelegate=_videoMessageDelegate;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)_cleanupCamera;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)ckVideoRecorder:(id)arg1 imageDataCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorder:(id)arg1 videoCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoRecorderRecordingCanceled:(id)arg1;
- (void)cancelMenuItemAction:(id)arg1;
- (void)cancel;
- (void)send;
- (void)stopRecordingWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)photoMenuItemAction:(id)arg1;
- (void)takePictureWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)videoMenuItemAction:(id)arg1;
- (void)record;
- (void)actionMenuControllerWillDismissActionMenu:(id)arg1 animated:(BOOL)arg2;
- (void)swapCamera:(id)arg1;
- (void)_animateVideoIn;
- (BOOL)shouldAutorotate;
- (void)dismissWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_cameraOrientationChanged:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_previewWarmedUp:(id)arg1;
- (void)presentWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)presentVideoActionMenuController;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithPresentationView:(id)arg1;

@end

