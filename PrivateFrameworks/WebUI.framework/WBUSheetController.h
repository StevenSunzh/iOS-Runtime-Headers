/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableArray, NSString, UIAlertController, UITableView, WebUIAlert;

@interface WBUSheetController : NSObject <UITableViewDelegate, UITableViewDataSource> {
    WebUIAlert *_alert;
    UIAlertController *_alertController;
    NSMutableArray *_alertInvocationQueue;
    id _delegate;
    UITableView *_tableView;
    bool_isDismissed;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_alertDidDismissWithAction:(int)arg1;
- (void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3;
- (void)hideSheet;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;
- (void)showSheetForAlert:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
