/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPlacemark, MKReverseGeocoderInternal, <MKReverseGeocoderDelegate>;

@interface MKReverseGeocoder : NSObject  {
    MKReverseGeocoderInternal *_internal;
}

@property <MKReverseGeocoderDelegate> * delegate;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) MKPlacemark * placemark;
@property(getter=isQuerying,readonly) BOOL querying;


- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)cancel;
- (void)dealloc;
- (struct { double x1; double x2; })coordinate;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)start;
- (id)placemark;
- (void)_notifyNoResults;
- (id)_placemarkFromResponse:(id)arg1;
- (BOOL)isQuerying;
- (void)_notifyError:(id)arg1;
- (void)_notifyResult:(id)arg1;

@end