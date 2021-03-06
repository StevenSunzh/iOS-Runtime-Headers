/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class UIButton, UIColor, UIView;

@interface RCAudioRouteBarButtonItem : UIBarButtonItem {
    UIButton *_button;
    UIView *_contentView;
    UIColor *_toggleSpeakerOtherRouteChosenColor;
    UIColor *_toggleSpeakerSpeakerRouteChosenColor;
    bool_needsButtonUpdate;
}

+ (id)newAudioRouteItem;

- (void).cxx_destruct;
- (void)_audioRouteControllerAvailableRoutesMaskDidChangeNotification:(id)arg1;
- (void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1;
- (void)_setNeedsUpdateButton;
- (void)_showAvailableRoutesAction;
- (void)_toggleSpeakerAction;
- (void)_updateButton;
- (void)dealloc;
- (id)initAudioRouteItem;

@end
