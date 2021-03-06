/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSMutableArray, NSMutableString, NSString;

@interface MecabraAnalysisContextImpl : NSObject {
    NSMutableArray *_candidateContext;
    NSMutableString *_candidateContextString;
    NSString *_stringBeforeCaret;
    NSString *_stringContext;
    bool_rebuildCandidateContextString;
}

@property(retain) NSMutableArray * candidateContext;
@property(readonly) NSArray * candidateContextForAnalysis;
@property(retain) NSMutableString * candidateContextString;
@property bool rebuildCandidateContextString;
@property(retain) NSString * stringBeforeCaret;
@property(retain) NSString * stringContext;
@property(readonly) NSString * stringContextForAnalysis;

- (void)addCandidate:(id)arg1;
- (void)adjustCandidateContext;
- (id)candidateContext;
- (id)candidateContextForAnalysis;
- (id)candidateContextString;
- (void)clearContextForAddition;
- (void)dealloc;
- (id)init;
- (struct { unsigned long long x1; unsigned long long x2; })positionInContextWithPartialDocumentStringLength:(unsigned long long)arg1;
- (bool)rebuildCandidateContextString;
- (void)reset;
- (void)revertLastCommittedCandidate;
- (void)setCandidateContext:(id)arg1;
- (void)setCandidateContextString:(id)arg1;
- (void)setRebuildCandidateContextString:(bool)arg1;
- (void)setStringBeforeCaret:(id)arg1;
- (void)setStringContext:(id)arg1;
- (id)stringBeforeCaret;
- (id)stringContext;
- (id)stringContextForAnalysis;

@end
