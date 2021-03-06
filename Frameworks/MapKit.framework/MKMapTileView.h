/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapTileViewImp, <MKMapTileViewDelegate>;

@interface MKMapTileView : UIView  {
    MKMapTileViewImp *_imp;
}

@property(readonly) float zoomScale;
@property(readonly) float zoomLevel;
@property(readonly) int displayZoomLevel;
@property(readonly) int roundedZoomLevel;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } visibleMapRect;
@property(getter=isLoading,readonly) BOOL loading;
@property(getter=isDrawing,readonly) BOOL drawing;
@property(getter=isRendering,readonly) BOOL rendering;
@property(getter=isLoadingEnabled) BOOL loadingEnabled;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property BOOL shouldReloadSynchronously;
@property <MKMapTileViewDelegate> * delegate;
@property unsigned int mapType;
@property struct CGSize { float x1; float x2; } tileSize;
@property BOOL canDrawOnMainThread;
@property BOOL canDisplayTraffic;
@property BOOL levelCrossFade;
@property BOOL shouldDisplayBaseTiles;
@property BOOL shouldDisplayTraffic;
@property BOOL shouldDisplayEffects;

+ (Class)layerClass;

- (void)_reachabilityChanged:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isDrawingEnabled;
- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 levelOfDetail:(int)arg3;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setDrawingEnabled:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (float)zoomScale;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (float)contentScaleFactor;
- (BOOL)_canDrawContent;
- (void)setContentScaleFactor:(float)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)awakeFromNib;
- (void)_commonInit;
- (void)flush;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)delegate;
- (void)didMoveToWindow;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayBaseTilesOfLayer:(id)arg1;
- (void)renderLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (int)roundedZoomLevel;
- (BOOL)canDisplayTraffic;
- (BOOL)shouldDisplayTraffic;
- (BOOL)shouldDisplayBaseTiles;
- (BOOL)levelCrossFade;
- (void)_loadBaseTiles;
- (void)_scheduleDrawExpirationTimer:(double)arg1;
- (void)_addTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toMapRectFromView:(id)arg2;
- (struct { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toCoordinateFromView:(id)arg2;
- (void)_scheduleTileRequestTimer;
- (void)_didStartLoading;
- (BOOL)_addTileRequester:(id)arg1;
- (void)_didFailLoadingWithError:(id)arg1;
- (void)_didFinishLoading;
- (BOOL)_removeTileRequester:(id)arg1;
- (void)_displayTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })displayRect;
- (void)_scheduleTileExpirationTimer:(double)arg1;
- (void)_setNeedsDisplayInTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)expireTiles:(id)arg1;
- (void)_drawingDidEnd:(id)arg1;
- (void)setDrawing:(BOOL)arg1;
- (void)_requestTiles:(id)arg1;
- (void)finishLoadingVisibleRect;
- (void)_updateTrafficHighlight;
- (BOOL)isDrawing;
- (void)_updateMinificationFilterBias;
- (void)_updateZoomFilters;
- (void)_didFinishRendering;
- (void)_didStartRendering;
- (BOOL)_isLoadingInVisibleRect;
- (BOOL)shouldDisplayEffects;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toDoubleRectToView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toDoublePointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (void)addTilesToList:(id)arg1 surroundingCoordinate:(struct { double x1; double x2; })arg2 zoomLevel:(int)arg3 forVisibleSize:(struct CGSize { float x1; float x2; })arg4;
- (struct { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toMapPointFromView:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })convertMapPoint:(struct { double x1; double x2; })arg1 toDoublePointToView:(id)arg2;
- (void)setCanDisplayTraffic:(BOOL)arg1;
- (int)displayZoomLevel;
- (void)setShouldDisplayTraffic:(BOOL)arg1;
- (void)setLevelCrossFade:(BOOL)arg1;
- (void)setShouldDisplayEffects:(BOOL)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })visibleMapRect;
- (BOOL)isRendering;
- (void)setShouldReloadSynchronously:(BOOL)arg1;
- (BOOL)shouldReloadSynchronously;
- (BOOL)isLoadingEnabled;
- (void)setShouldDisplayBaseTiles:(BOOL)arg1;
- (void)setCanDrawOnMainThread:(BOOL)arg1;
- (BOOL)canDrawOnMainThread;
- (void)reloadTilesAfterResume;
- (void)invalidateAllTimers;
- (void)stopTileLoading;
- (unsigned int)mapType;
- (void)setMapType:(unsigned int)arg1;
- (void)setLoadingEnabled:(BOOL)arg1;
- (void)display;
- (float)zoomLevel;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRegionFromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;

@end
