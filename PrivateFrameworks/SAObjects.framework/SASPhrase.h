/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SASPhrase : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * interpretations;
@property bool lowConfidence;
@property bool speechRepairApplied;
@property(readonly) Class superclass;

+ (id)phrase;
+ (id)phraseWithDictionary:(id)arg1 context:(id)arg2;

- (id)af_speechInterpretations;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interpretations;
- (bool)lowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setLowConfidence:(bool)arg1;
- (void)setSpeechRepairApplied:(bool)arg1;
- (bool)speechRepairApplied;

@end
