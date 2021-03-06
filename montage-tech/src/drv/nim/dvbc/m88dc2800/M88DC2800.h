/********************************************************************************************/
/* Montage Technology (Shanghai) Co., Ltd.                                                  */
/* Montage Proprietary and Confidential                                                     */
/* Copyright (c) 2014 Montage Technology Group Limited and its affiliated companies         */
/********************************************************************************************/
/*
 * Filename:		M88DC2800.h
 * Current Version:	2.00a
 *
 * Description:	Montage M88DC2800 QAM demodulator IC driver.
 *
 * log:	Description							Version		Date	Author
 *		---------------------------------------------------------------------
 *		Create								1.10	xxxx.xx.xx	Jason Huang
 *		Modify								2.20a	2007.12.28	ChenXiaopeng
 *
 ****************************************************************************/



/*****************************************************************************/
/* DEFINES: */
#ifndef __M88DC2000_H__
#define __M88DC2000_H__

#define TUNER_I2C_ADDR				0xC0	/*	The tuner address maybe changed	*/
#define DEMOD_I2C_ADDR				0x38	/*	M88DC2000 address				*/

/* Define variable sizes */
#define U8	unsigned char
#define S8	char
#define U16	unsigned short
#define S16	short
#define U32	unsigned int
#define S32	int
#define DB	double
#if 0
typedef enum _MT_FE_RET
{
	MtFeErr_Ok					= 0
   ,MtFeErr_Fail				= -1
} MT_FE_RET;
#endif
/*
*
*	PUBLIC FUNCTION:
*
*	void M88DC2000TunerSet(U32 frq, U32 sym, U16 qam, U8 inverted, U32 xtal)
*	U8 M88DC2000Lock(void);
*	DB M88DC2000GetBER(void);
*	DB M88DC2000GetSNR(U16 qam);
*	U8 M88DC2000GetSignalStrength(void);
*
*/


/* Function to soft reset M88DC2000 */
void M88DC2000SoftReset(void);

/* Function to Initialise the M88DC2000 */
void M88DC2000RegInitial(void);

/* Functions to configure the M88DC2000 to match the input signal */
void M88DC2000SetSym(U32 sym, U32 xtal);
void M88DC2000SetQAM(U16 qam);
void M88DC2000SetTxMode(U8 inverted, U8 j83);

/*Function to set MPEG/TS interface*/
void M88DC2000SetTsType(U8 type);

/*Functions to get lock status*/
U8 M88DC2000GetAgcLock(void);
U8 M88DC2000Lock(void);
U8 M88DC2000GetLock(void);

/*Functions to get BER, SNR and signal strength*/
DB M88DC2000GetBER(void);
U8 M88DC2000GetSNR(U16 qam);
U8 M88DC2000GetTc2800SignalStrength(void);
U8 M88DC2000GetTc2000SignalStrength(void);


void M88DC2000SetChannel(U32 freq, U32 sym, U16 qam, U8 inverted, U32 xtal);


#endif
