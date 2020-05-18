
//单片机头文件
//#include "stm32f10x.h"

//网络设备数据IO
#include "hcho.h"

//硬件驱动
#include "delay.h"
//#include "usart.h"

//C库
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
HCHO_INFO hchoInfo;
unsigned short aaa=88;
void HCHO_Init(void)
{
	HCHO_ClearRecive();
}


void HCHO_ClearRecive(void)
{
	
	unsigned short i = 0;


	
	for(; i < sizeof(hchoInfo.buf); i++)
		hchoInfo.buf[i] = 0;

}


