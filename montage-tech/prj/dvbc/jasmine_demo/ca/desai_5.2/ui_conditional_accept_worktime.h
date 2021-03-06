/********************************************************************************************/
/* Montage Technology (Shanghai) Co., Ltd.                                                  */
/* Montage Proprietary and Confidential                                                     */
/* Copyright (c) 2014 Montage Technology Group Limited and its affiliated companies         */
/********************************************************************************************/
#ifndef __UI_CONDITIONAL_ACCEPT_WORKTIME_H__
#define __UI_CONDITIONAL_ACCEPT_WORKTIME_H__

/* coordinate */
#define CONDITIONAL_ACCEPT_WORKTIME_CONT_X          COMM_ITEM_OX_IN_ROOT
#define CONDITIONAL_ACCEPT_WORKTIME_CONT_Y          COMM_ITEM_OY_IN_ROOT
#define CONDITIONAL_ACCEPT_WORKTIME_CONT_W          COMM_BG_W
#define CONDITIONAL_ACCEPT_WORKTIME_CONT_H          COMM_BG_H

//work duration items
#define CONDITIONAL_ACCEPT_WORKTIME_WORK_ITEM_CNT      4

#define CONDITIONAL_ACCEPT_WORKTIME_WORK_ITEM_X        CONDITIONAL_ACCEPT_WORKTIME_CONT_X
#define CONDITIONAL_ACCEPT_WORKTIME_WORK_ITEM_Y        CONDITIONAL_ACCEPT_WORKTIME_CONT_Y
#define CONDITIONAL_ACCEPT_WORKTIME_WORK_ITEM_LW       (COMM_ITEM_MAX_WIDTH/2)
#define CONDITIONAL_ACCEPT_WORKTIME_WORK_ITEM_RW       (COMM_ITEM_MAX_WIDTH/2)
#define CONDITIONAL_ACCEPT_WORKTIME_WORK_ITEM_H        COMM_ITEM_H

#define CONDITIONAL_ACCEPT_WORKTIME_WORK_ITEM_V_GAP    20

#define CONDITIONAL_ACCEPT_WORKTIME_OK_ITEM_X        (CONDITIONAL_ACCEPT_WORKTIME_CONT_X + (COMM_ITEM_MAX_WIDTH - CONDITIONAL_ACCEPT_WORKTIME_OK_ITEM_W)/2)
#define CONDITIONAL_ACCEPT_WORKTIME_OK_ITEM_W        100
#define CONDITIONAL_ACCEPT_WORKTIME_OK_ITEM_H        COMM_ITEM_H

//change work time result
#define CONDITIONAL_ACCEPT_WORK_TIME_CHANGE_RESULT_X        CONDITIONAL_ACCEPT_WORKTIME_CONT_X
#define CONDITIONAL_ACCEPT_WORK_TIME_CHANGE_RESULT_W        COMM_ITEM_MAX_WIDTH
#define CONDITIONAL_ACCEPT_WORK_TIME_CHANGE_RESULT_H        COMM_ITEM_H


RET_CODE open_conditional_accept_worktime(u32 para1, u32 para2);

#endif


