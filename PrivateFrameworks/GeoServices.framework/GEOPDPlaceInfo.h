/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int area : 1; 
        unsigned int isApproximateCenter : 1; 
    double _area;
    GEOLatLng *_center;
    } _has;
    GEOTimezone *_timezone;
    bool_isApproximateCenter;
}

@property double area;
@property(retain) GEOLatLng * center;
@property bool hasArea;
@property(readonly) bool hasCenter;
@property bool hasIsApproximateCenter;
@property(readonly) bool hasTimezone;
@property bool isApproximateCenter;
@property(retain) GEOTimezone * timezone;

+ (id)placeInfoForPlaceData:(id)arg1;

- (double)area;
- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArea;
- (bool)hasCenter;
- (bool)hasIsApproximateCenter;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (bool)isApproximateCenter;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArea:(double)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasArea:(bool)arg1;
- (void)setHasIsApproximateCenter:(bool)arg1;
- (void)setIsApproximateCenter:(bool)arg1;
- (void)setTimezone:(id)arg1;
- (id)timezone;
- (void)writeTo:(id)arg1;

@end