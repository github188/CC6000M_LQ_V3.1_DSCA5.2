
/********************************************************************************************/
/* Copyright (c) 2014 Montage Technology Group Limited and its affiliated companies         */
/* Montage Proprietary and Confidential                                                     */
/* Montage Technology (Shanghai) Co., Ltd.                                                  */
/********************************************************************************************/
#ifndef _KVDB_MIDDLEWARE_PORTING_EVENT_H_
#define _KVDB_MIDDLEWARE_PORTING_EVENT_H_

#ifdef __cplusplus
extern "C" {
#endif
#define IR_KEY_LEFT          0x00ffda25
#define IR_KEY_RIGHT       0x00ff1ae5
#define IR_KEY_UP             0x00ff7a85
#define IR_KEY_DOWN       0x00ff6a95
#define IR_KEY_OK            0x00ff5aa5
#define IR_KEY_EXIT         0x00ff2ad5


 //����Ϣ Event[0] 
enum 
{
      TUNER_MESSAGE=1, 	//tuner��Ϣ
	KEY_MESSAGE,		//ң������Ϣ
	DEMUX_MESSAGE		//demux��Ϣ
};
//����Ϣ
enum 
{
	TUNER_DELIVERY_SUCCESS = 0x500,
	TUNER_DELIVERY_FAILED,
	TUNER_SIGNAL_STOP,
	TUNER_SIGNAL_RESUME,
	KV_KEY_LEFT,
	KV_KEY_RIGHT,
	KV_KEY_UP,
	KV_KEY_DOWN,
	KV_KEY_SELECT,
	KV_KEY_EXIT
};

#ifdef __cplusplus
}
#endif

#endif

