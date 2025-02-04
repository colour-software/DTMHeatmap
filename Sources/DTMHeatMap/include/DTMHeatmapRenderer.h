//
//  DTMHeatmapRenderer.h
//  HeatMapTest
//
//  Created by Bryan Oltman on 1/6/15.
//  Copyright (c) 2015 Dataminr. All rights reserved.
//

#import <MapKit/MapKit.h>
#import "DTMHeatmapOverlay.h"

@interface DTMHeatmapRenderer : MKOverlayRenderer

@property (nonatomic) BOOL zoomNormalization;

- (id)initWithOverlay:(id <MKOverlay>)overlay andHeatRadiusPoints: (NSInteger) heatRadius;

@end
