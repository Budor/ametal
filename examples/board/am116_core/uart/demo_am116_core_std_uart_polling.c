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
 * \brief UART ��ѯ��ʽ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. ������� "STD-UART test in polling mode:"��
 *   2. ����������յ����ַ�����
 *
 * \note
 *    1. ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_9 �������� PC ���ڵ� RXD��
 *    2. ������Դ���ʹ���뱾������ͬ����Ӧ�ں�������ʹ�õ�����Ϣ�������
 *      ���磺AM_DBG_INFO()����
 *
 * \par Դ����
 * \snippet demo_am116_core_std_uart_polling.c src_am116_core_std_uart_polling
 *
 * \internal
 * \par Modification History
 * - 1.01 17-04-17  ari, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_am116_core_std_uart_polling
 * \copydoc demo_am116_core_std_uart_polling.c
 */

/** [src_am116_core_std_uart_polling] */
#include "ametal.h"
#include "am_vdebug.h"
#include "am_zlg116_inst_init.h"
#include "demo_std_entries.h"

/**
 * \brief �������
 */
void demo_am116_core_std_uart_polling_entry (void)
{
    AM_DBG_INFO("demo am116_core std uart polling!\r\n");

    demo_std_uart_polling_entry(am_zlg116_uart1_inst_init());
}
/** [src_am116_core_std_uart_polling] */

/* end of file */