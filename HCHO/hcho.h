#ifndef _HCHO_H_
#define _HCHO_H_


typedef struct
{
	
/*************************���ջ���*************************/
	unsigned short data;			//����
	unsigned char buf[256];			//���ջ���

} HCHO_INFO;

extern HCHO_INFO hchoInfo;





void HCHO_Init(void);



void HCHO_ClearRecive(void);


#endif
