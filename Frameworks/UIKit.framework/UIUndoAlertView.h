/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSUndoManager;

@interface UIUndoAlertView : UIAlertView  {
    int _undoButtonIndex;
    int _redoButtonIndex;
    NSUndoManager *_undoManager;
}

@property(readonly) int undoButtonIndex;
@property(readonly) int redoButtonIndex;
@property(readonly) NSUndoManager * undoManager;


- (void)dealloc;
- (id)undoManager;
- (int)redoButtonIndex;
- (int)undoButtonIndex;
- (void)show;
- (id)initWithDelegate:(id)arg1 undoManager:(id)arg2;

@end
