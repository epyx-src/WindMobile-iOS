//
//  StationDetailMeteoViewController.h
//  WindMobile
//
//  Created by Stefan Hochuli Paychère on 15.02.11.
//  Copyright 2011 Pistache Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WMReSTClient.h"

@class StationInfo;
@class StationData;
@class WindTrendChartViewController;
@class WindPlotController;

@interface StationDetailMeteoViewController : UIViewController<WMReSTClientDelegate, UIActionSheetDelegate> {
	WMReSTClient* client;
	
	StationInfo* stationInfo;
	StationData* stationData;
	
	// Outlets
	UILabel *stationName;
	UILabel *lastUpdated;
	UILabel *altitude;
	UILabel *windAverage;
	UILabel *windMax;
	UIImageView *windDirectionArrow;
	UILabel *windHistoryMin;
	UILabel *windHistoryAverage;
	UILabel *windHistoryMax;
	UILabel *airTemperature;
	UILabel *airHumidity;
	
	UIView *windTrendContainer;
	WindTrendChartViewController *windTrendCtrl;
	
	UIView *windPlotView;
	WindPlotController *windPlotController;
}
@property (retain) StationInfo* stationInfo; 
@property (retain) StationData* stationData; 

@property (retain) IBOutlet UILabel *lastUpdated;
@property (retain) IBOutlet UILabel *altitude;
@property (retain) IBOutlet UILabel *windAverage;
@property (retain) IBOutlet UILabel *windMax;
@property (retain) IBOutlet UIImageView *windDirectionArrow;
@property (retain) IBOutlet UILabel *windHistoryMin;
@property (retain) IBOutlet UILabel *windHistoryAverage;
@property (retain) IBOutlet UILabel *windHistoryMax;
@property (retain) IBOutlet UILabel *airTemperature;
@property (retain) IBOutlet UILabel *airHumidity;
@property (retain) IBOutlet UIView *windTrendContainer;
@property (retain) IBOutlet WindTrendChartViewController *windTrendCtrl;
@property (retain) UIView *windPlotView;
@property (retain) WindPlotController *windPlotController;

// Content
- (IBAction)refreshContent:(id)sender;
- (IBAction)showMap:(id)sender;
- (IBAction)showActionSheet:(id)sender;
- (IBAction)showGraph:(id)sender;
@end

@interface StationDetailMeteoViewController ()
- (void)startRefreshAnimation;
- (void)stopRefreshAnimation;
@end