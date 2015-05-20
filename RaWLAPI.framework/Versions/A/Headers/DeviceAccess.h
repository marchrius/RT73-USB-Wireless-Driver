//
//  Device.h
//  RaWLAPI
//
//  Created by ralink on 2009/5/11.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <IOKit/IOTypes.h>
#import "StructDef.h"

#define kServiceClassName_60	"CardBusWirelessDriver"
#define kServiceClassName_61	"RT61CardBusDriver"
#define kServiceClassName_2860	"RT2860WirelessDriver"

#define kServiceClassName_73	"RT2573USBWirelessDriver"
#define kServiceClassName_70	"RT2500USBWirelessDriver"
#define kServiceClassName_2870	"RT2870USBWirelessDriver"

DEVICE_DRIVER_TYPE SearchDevice();
BOOL OpenConnectToDevice();
void CloseConnectToDevice();
BOOL OidQueryInformation(ULONG OidQueryCode,  PVOID InformationBuffer, UINT InformationBufferLength, PULONG pBytesReturn);
BOOL OidSetInformation(ULONG OidSetCode, PVOID InformationBuffer, UINT InformationBufferLength, PULONG pBytesReturn);
BOOL GetWLANStatus(WLANSTATUS *pWLANStatus);