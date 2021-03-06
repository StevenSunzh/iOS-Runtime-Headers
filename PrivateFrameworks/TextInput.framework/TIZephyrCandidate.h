/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    NSString *_label;
    unsigned int _usageTrackingMask;
    unsigned long long _wordOriginFeedbackID;
    bool_isFromPhraseDictionary;
    bool_isFromTextChecker;
    boolextensionCandidate;
}

@property(getter=isExtensionCandidate) bool extensionCandidate;
@property bool isFromPhraseDictionary;
@property bool isFromTextChecker;
@property(copy) NSString * label;

+ (bool)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutocorrection;
- (bool)isExtensionCandidate;
- (bool)isFromPhraseDictionary;
- (bool)isFromTextChecker;
- (id)label;
- (void)setExtensionCandidate:(bool)arg1;
- (void)setIsFromPhraseDictionary:(bool)arg1;
- (void)setIsFromTextChecker:(bool)arg1;
- (void)setLabel:(id)arg1;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

@end
