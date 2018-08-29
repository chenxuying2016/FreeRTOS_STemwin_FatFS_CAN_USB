/*
*********************************************************************************************************
*
*	ģ������ : ͷ�ļ�����
*	�ļ����� : includes.h
*	��    �� : V1.0
*	˵    �� : ��ǰʹ��ͷ�ļ�����
*
*	�޸ļ�¼ :
*		�汾��    ����        ����     ˵��
*		V1.0    2015-08-02  Eric2013   �״η���
*
*	Copyright (C), 2015-2020, ���������� www.armfly.com
*
*********************************************************************************************************
*/

#ifndef  __INCLUDES_H__
#define  __INCLUDES_H__

/*
*********************************************************************************************************
*                                         ��׼��
*********************************************************************************************************
*/
#include  <stdarg.h>
#include  <stdio.h>
#include  <stdint.h>
#include  <stdlib.h>
#include  <math.h>


/*
*********************************************************************************************************
*                                         ������
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                           OS
*********************************************************************************************************
*/
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "croutine.h"
#include "semphr.h"
#include "event_groups.h"


/*
*********************************************************************************************************
*                                           �궨��
*********************************************************************************************************
*/
#define BIT_16	(1 << 16)
#define BIT_17	(1 << 17)
#define BIT_18	(1 << 18)
#define BIT_19	(1 << 19)
#define BIT_20	(1 << 20)
#define BIT_21	(1 << 21)
#define BIT_22	(1 << 22)
#define BIT_23	(1 << 23)
#define BIT_24	(1 << 24)
#define BIT_ALL (BIT_16 | BIT_17 | BIT_18 | BIT_19 | BIT_20 | BIT_21) //  

static const TickType_t xMaxBlockTime = pdMS_TO_TICKS(100); /* �������ȴ�ʱ��Ϊ500ms */



/*
*********************************************************************************************************
*                                        APP / BSP
*********************************************************************************************************
*/

#include  <bsp.h>
#include "usbh_bsp_msc.h"
#include "demo_fatfs.h"
#include "bsp_key.h"

/* ���������е��� */
extern void vSetupSysInfoTest(void);

#endif

/***************************** ���������� www.armfly.com (END OF FILE) *********************************/