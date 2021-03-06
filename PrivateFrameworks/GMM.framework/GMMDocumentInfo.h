/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMDocumentInfo : PBCodable  {
    NSString *_author;
    NSString *_attributionUrl;
}

@property(readonly) BOOL hasAuthor;
@property(retain) NSString * author;
@property(readonly) BOOL hasAttributionUrl;
@property(retain) NSString * attributionUrl;


- (id)description;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)author;
- (void)setAuthor:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)attributionUrl;
- (BOOL)hasAttributionUrl;
- (BOOL)hasAuthor;
- (void)setAttributionUrl:(id)arg1;

@end
