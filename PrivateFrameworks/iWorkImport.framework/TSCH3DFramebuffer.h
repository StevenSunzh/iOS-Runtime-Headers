/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFramebuffer : NSObject {
    struct FramebufferAttributes { 
        int type; 
        long long samples; 
        int colorDataType; 
        int colorFormat; 
        int depthDataType; 
        boollinearFilter; 
        booldiscardHint; 
    } mFramebufferAttributes;
}

+ (id)framebufferWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; boolx6; boolx7; }*)arg1;

- (id).cxx_construct;
- (const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; boolx6; boolx7; }*)framebufferAttributes;
- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes { int x1; long long x2; int x3; int x4; int x5; boolx6; boolx7; }*)arg1;

@end
