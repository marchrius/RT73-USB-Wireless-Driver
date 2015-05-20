//
//  ScanFuncs.h
//  RaWLAPI
//
//  Created by ralink on 2009/5/12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "StructDef.h"
#import "ConfigFuncs.h"

@interface ScanFuncs : NSObject
{
	SEL				FuncCallBack;
	IMP				Method;
	id				ObjectId;
	BOOL		bScanTimerRunning;
}

- (BOOL)SiteSurveyScan:(id)objId CallBackFunc:(SEL)callBackFunc;
- (void)OnScanTimer:(NSTimer *)timer;
- (LONG)SiteSurveyGet:(PNDIS_802_11_BSSID_LIST_EX)pBssidList ListSize:(ULONG *)pListSize;
@end
