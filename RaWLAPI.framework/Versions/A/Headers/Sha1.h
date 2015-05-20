/*
 ***************************************************************************
 * Ralink Tech Inc.
 * 4F, No. 2 Technology 5th Rd.
 * Science-based Industrial Park
 * Hsin-chu, Taiwan, R.O.C.
 *
 * (c) Copyright 2002, Ralink Technology, Inc.
 *
 * All rights reserved. Ralink's source code is an unpublished work and the
 * use of a copyright notice does not imply otherwise. This source code
 * contains confidential trade secret material of Ralink Tech. Any attemp
 * or participation in deciphering, decoding, reverse engineering or in any
 * way altering the source code is stricitly prohibited, unless the prior
 * written consent of Ralink Technology, Inc. is obtained.
 ***************************************************************************/

#ifndef SHA1_H
#define SHA1_H

#define A_SHA_DIGEST_LEN 20

typedef struct 
{
  unsigned long H[5];
  unsigned long W[80];
  int lenW;
  unsigned long sizeHi,sizeLo;
} A_SHA_CTX;

void A_SHAInit(A_SHA_CTX *ctx);
void A_SHAUpdate(A_SHA_CTX *ctx, unsigned char *dataIn, int len);
void A_SHAFinal(A_SHA_CTX *ctx, unsigned char hashout[20]);

#endif /* SHA1_H */
