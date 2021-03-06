/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIColor, <_UIDefinitionServiceDelegate>, NSURL;

@interface _UIDefinitionService : NSObject <UIWebViewDelegate> {
    NSArray *_dictionaries;
    <_UIDefinitionServiceDelegate> *_delegate;
    UIColor *_backgroundColor;
    NSURL *_stylesheetURL;
}

@property <_UIDefinitionServiceDelegate> * delegate;
@property(retain) UIColor * backgroundColor;
@property(readonly) NSURL * stylesheetURL;

+ (id)foregroundColor;
+ (id)backgroundColor;

- (id)init;
- (void)dealloc;
- (id)stylesheetURL;
- (unsigned int)languageDirectionForString:(id)arg1;
- (id)_dictionaryForString:(id)arg1;
- (id)markupForString:(id)arg1;
- (BOOL)hasMarkupForString:(id)arg1;
- (id)backgroundColor;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBackgroundColor:(id)arg1;

@end
