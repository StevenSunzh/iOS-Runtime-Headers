/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVRoutingController, NSArray, NSString;

@interface MPAudioRoutingPicker : UIAlertView <MPAVRoutingControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray *_routes;
    MPAVRoutingController *_routingController;
    bool_ignoringInteractionEvents;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2;
- (void)dealloc;
- (id)initWithAVPlayer:(id)arg1;
- (bool)requiresPortraitOrientation;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAVPlayer:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
