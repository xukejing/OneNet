#ifndef _HCHO_H_
#define _HCHO_H_


typedef struct
{
	
/*************************接收缓存*************************/
	unsigned short data;			//接收
	unsigned char buf[256];			//接收缓存

} HCHO_INFO;

extern HCHO_INFO hchoInfo;





void HCHO_Init(void);



void HCHO_ClearRecive(void);


#endif
