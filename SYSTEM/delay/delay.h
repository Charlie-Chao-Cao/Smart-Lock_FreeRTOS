#ifndef __DELAY_H
#define __DELAY_H 			   
#include "sys.h"  
//////////////////////////////////////////////////////////////////////////////////	 
//使用SysTick的普通计数模式对延迟进行管理（适合STM32F10x系列）
//包括delay_us,delay_ms
////////////////////////////////////////////////////////////////////////////////// 
	 
void delay_init(void);
void delay_ms(u32 nms);
void delay_us(u32 nus);
void delay_xms(u32 nms);
#endif





























