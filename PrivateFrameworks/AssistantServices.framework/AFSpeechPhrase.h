/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding> {
    NSArray *_interpretations;
    bool_isLowConfidence;
}

@property(copy) NSArray * interpretations;
@property bool isLowConfidence;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestInterpretation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interpretations;
- (bool)isLowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setIsLowConfidence:(bool)arg1;

@end
