/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKCellShortener>, UIColor, TwoPartTextLabel;

@interface PreferencesTwoPartValueCell : UITableViewCell  {
    TwoPartTextLabel *_twoPartLabel;
    unsigned int _notifiedShort;
    <EKCellShortener> *_shortener;
}

@property(readonly) TwoPartTextLabel * twoPartTextLabel;
@property <EKCellShortener> * shortener;
@property(readonly) UIColor * valueColor;


- (void)dealloc;
- (id)twoPartTextLabel;
- (void)shorten;
- (void)checkValueWidths;
- (void)_layoutSubviewsCore;
- (void)layoutText:(id)arg1 andValue:(id)arg2;
- (void)setShortener:(id)arg1;
- (id)shortener;
- (id)valueColor;
- (void)layoutSubviews;

@end
