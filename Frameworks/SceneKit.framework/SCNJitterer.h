/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class <SCNJittererDelegate>, NSObject<OS_dispatch_source>;

@interface SCNJitterer : NSObject {
    <SCNJittererDelegate> *_delegate;
    unsigned long long _iteration;
    NSObject<OS_dispatch_source> *_restartSource;
    unsigned long long _state;
    bool_enabled;
    bool_jitteringSupported;
    bool_restartSourceIsSuspended;
}

@property(getter=isEnabled) bool enabled;

+ (void)initialize;

- (void)dealloc;
- (void)delegateWillDie;
- (id)initWithDelegate:(id)arg1;
- (bool)isAborting;
- (bool)isEnabled;
- (void)jitter;
- (void)restart;
- (void)setEnabled:(bool)arg1;
- (void)stopIfNeeded;
- (void)update;

@end
