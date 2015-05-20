//
//  KeyChainTransfer.h
//  RaConfig2800
//
//  Created by ralink on 10/6/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include <Security/SecAccess.h>

NSString *GetKeyChainPath();
int KeyChainExport(unsigned char *chCertName, unsigned char *chPrivateKeyName);
void GetCertificationName(NSString *strName[], unsigned *numCerts);
void GetPrivateKeyName(NSString *strName[], unsigned *numKeys);
