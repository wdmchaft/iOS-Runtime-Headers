/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun  {
    WDCharacterProperties *mProperties;
    int mType;
}


- (void)dealloc;
- (id)properties;
- (int)characterType;
- (void)clearProperties;
- (void)setCharacterType:(int)arg1;
- (id)initWithParagraph:(id)arg1;
- (int)runType;

@end
