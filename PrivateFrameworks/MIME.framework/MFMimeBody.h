/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {
    unsigned int _preferredAlternative : 16;
    unsigned int _numAlternatives : 16;
    MFMimePart *_topLevelPart;
}

+ (id)copyNewMimeBoundary;
+ (id)versionString;

- (id)attachmentURLs;
- (id)attachments;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 isComplete:(bool*)arg4;
- (void)dealloc;
- (id)firstPartPassingTest:(id)arg1;
- (id)init;
- (bool)isHTML;
- (bool)isRich;
- (id)mimeSubtype;
- (id)mimeType;
- (long long)numberOfAlternatives;
- (unsigned int)numberOfAttachmentsSigned:(bool*)arg1 encrypted:(bool*)arg2;
- (id)partWithNumber:(id)arg1;
- (long long)preferredAlternative;
- (id)preferredBodyPart;
- (void)setPreferredAlternative:(long long)arg1;
- (void)setTopLevelPart:(id)arg1;
- (id)textHtmlPart;
- (id)topLevelPart;
- (unsigned long long)totalTextSize;

@end
