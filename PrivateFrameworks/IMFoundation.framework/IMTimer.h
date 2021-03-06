/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSDate, NSDictionary, NSString;

@interface IMTimer : NSObject {
    NSString *_name;
    SEL _selector;
    id _target;
    double _timeInterval;
    id _timer;
    NSDictionary *_userInfo;
    bool_wakeDevice;
}

@property(retain,readonly) NSDate * fireDate;
@property(retain,readonly) id userInfo;

- (void)dealloc;
- (id)fireDate;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(bool)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (void)invalidate;
- (void)setFireTimeInterval:(double)arg1;
- (id)userInfo;

@end
