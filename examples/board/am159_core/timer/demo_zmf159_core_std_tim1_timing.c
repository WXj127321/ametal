/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief TIM1 ��ʱ�� TIMING ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. ���Դ��������ʱ���������Ϣ
 *   2. ��ʱ���ڵ���(Ĭ��Ϊ 2Hz)�����Դ��ڻ���� The timing frq is 2Hz;
 *
 * \note
 *    16 λ��ʱ����ʱ����ֵ��Ϊ 65536 �ı�������ʱ����һЩƫ�
 *
 * \par Դ����
 * \snippet demo_zmf159_core_std_tim1_timing.c src_zmf159_core_std_tim1_timing
 *
 * \internal
 * \par Modification history
 * - 1.00 17-04-22  nwt, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_zmf159_core_std_tim1_timing
 * \copydoc demo_zmf159_core_std_tim1_timing.c
 */

/** [src_zmf159_core_std_tim1_timing] */
#include <demo_zmf159_core_entries.h>
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zmf159_inst_init.h"
#include "demo_std_entries.h"

/**
 * \brief �������
 */
void demo_zmf159_core_std_tim1_timing_entry (void)
{
    AM_DBG_INFO("demo zmf159_core std tim1 timing!\r\n");

    demo_std_timer_timing_entry(am_zmf159_tim1_timing_inst_init(), 0);
}
/** [src_zmf159_core_std_tim1_timing] */

/* end of file */