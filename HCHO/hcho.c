
//��Ƭ��ͷ�ļ�
//#include "stm32f10x.h"

//�����豸����IO
#include "hcho.h"

//Ӳ������
#include "delay.h"
//#include "usart.h"

//C��
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


