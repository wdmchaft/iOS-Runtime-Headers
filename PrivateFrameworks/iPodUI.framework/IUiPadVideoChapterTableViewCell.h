/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaItem, IUiPadVideoMovieChapterTableViewCellContentView;

@interface IUiPadVideoChapterTableViewCell : IUiPadVideoPartTableViewCell  {
    MPMediaItem *_mediaItem;
    unsigned int _chapterIndex;
}

@property(readonly) IUiPadVideoMovieChapterTableViewCellContentView * videoChapterContentView;
@property(retain) MPMediaItem * mediaItem;

+ (Class)contentViewClass;
+ (struct CGSize { float x1; float x2; })videoImageSize;

- (void)dealloc;
- (id)mediaItem;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (BOOL)imageRequestIsValid:(id)arg1;
- (id)videoImageRequest;
- (void)setMediaItem:(id)arg1 chapterIndex:(unsigned int)arg2;
- (void)updateContentView;
- (void)setMediaItem:(id)arg1;

@end
