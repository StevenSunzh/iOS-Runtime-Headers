/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;

@interface GQDWPParagraph : GQDWPInlineList {
    boolmContinue;
    boolmIsHidden;
    boolmRestartList;
    long long mListLevel;
    GQDSStyle *mParaStyle;
}

- (bool)cont;
- (void)dealloc;
- (bool)isBlank;
- (bool)isHidden;
- (long long)listLevel;
- (id)paragraphStyle;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (bool)restartList;

@end
