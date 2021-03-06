//
//  BarChartDelegate.h
//  MIMChartLib
//
//  Created by Reetu Raj on 4/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef MIMChartLib_BarChartDelegate_h
#define MIMChartLib_BarChartDelegate_h
@protocol BarChartDelegate<NSObject>
@optional
/*This values are plot on Y-Axis*/
-(NSArray *)valuesForGraph:(id)graph; 


/*This values are plot on X-Axis*/
-(NSArray *)valuesForXAxis:(id)graph;


/*These titles are displayed on X-Axis*/
-(NSArray *)titlesForXAxis:(id)graph;


-(NSArray *)ColorsForBarChart:(id)graph;

-(NSArray *)WidthsForBarChart:(id)graph;

-(float)WidthForBarChart:(id)graph;

-(BOOL)groupedBars:(id)graph;
-(BOOL)stackedBars:(id)graph;





-(float)gapBetweenVerticalLines:(id)graph;


-(float)gapBetweenHorizontalLines:(id)graph;

@end

#endif
