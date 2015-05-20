//
//  ConfigFuncs.h
//  RaWLAPI
//
//  Created by ralink on 2009/5/12.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "StructDef.h"

@interface ConfigFuncs : NSObject
{
	NSMutableArray *AdvanceRecords;
	NSMutableArray *ProfileRecords;
	NSMutableArray *SoftApProfileRecords;
	NSMutableArray *ProfileListRecords;
	NSMutableArray *ActiveProfileRecords;
	NSMutableArray *WpsRecords;
	NSMutableArray *OpModeRecords;
	
	NSUserDefaults *G_pPrefs;
}
// Advacne Setting
- (void)ReadAdvanceSetting:(ADVANCE_OID *)AdvCfgData;
- (void)WriteAdvanceSetting:(ADVANCE_OID)AdvCfgData;

// Profile Setting
- (BOOL)ReadProfileData:(PWLANPROFILE)pProfileData ProfileName:(NSString *)strProfileName;
- (void)WriteProfileData:(PWLANPROFILE)pProfileData ProfileName:(NSString *)strProfileName;
- (BOOL)ReadSoftApProfileData:(PSOFTAPPROFILE)pProfileData;
- (void)WriteSoftApProfileData:(PSOFTAPPROFILE)pProfileData;
- (NSString *)ReadActiveProfileData:(PWLANPROFILE)pProfileData;
- (void)WriteActiveProfileData:(PWLANPROFILE)pProfileData ProfileName:(NSString *)strProfileName;
- (void)DeleteProfile:(NSString *)strProfileName;
- (void)DeleteActiveProfile;
- (UINT)GetProfileCount;
- (void)GetProfileList:(WLANPROFILE *)ProfileList;
- (NSString *)GetNextProfileName;
- (void)GetWPSProfile:(WPS_MODE *)wpsMode WpsProfileList:(WPS_PROFILE *)wpsProfileList;
- (void)WriteWPSFlag:(BOOL)bWps;
- (void)WriteWPSProfile:(WPS_MODE)wpsMode WpsProfileList:(WPS_PROFILE)wpsProfileList;
- (void)ConnectWPSProfile:(WPS_CREDENTIAL)wpsProfile;
- (void)GetWPSFlag:(BOOL *)bWps;
- (void)ReadOpMode:(ULONG *)bOpMode;
- (void)WriteOpMode:(ULONG)bOpMode;
- (NSString *)ReadInternetSharingInterfaceName;
- (void)WriteInternetSharingInterfaceName:(NSString *)strName;
- (int)CheckDuplicatedProfileName:(NSString *)strProfileName;
@end
