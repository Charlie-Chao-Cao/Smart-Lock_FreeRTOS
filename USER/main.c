#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
 
 
/************************************************
 ALIENTEKս��STM32������ʵ��1
 �����ʵ�� 
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
************************************************/


 int main(void)
 {	
	delay_init();	    //��ʱ������ʼ��	  
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	while(1)
	{
		LED0=0;
		LED1=1;
		delay_ms(300);	 //��ʱ300ms
		LED0=1;
		LED1=0;
		delay_ms(300);	//��ʱ300ms
	}
 }


 /**
 *****************����ע�ӵĴ�����ͨ�����ÿ⺯����ʵ��IO���Ƶķ���*****************************************
int main(void)
{ 
 
	delay_init();		  //��ʼ����ʱ����
	LED_Init();		        //��ʼ��LED�˿�
	while(1)
	{
			GPIO_ResetBits(GPIOB,GPIO_Pin_5);  //LED0��Ӧ����GPIOB.5���ͣ���  ��ͬLED0=0;
			GPIO_SetBits(GPIOE,GPIO_Pin_5);   //LED1��Ӧ����GPIOE.5���ߣ��� ��ͬLED1=1;
			delay_ms(300);  		   //��ʱ300ms
			GPIO_SetBits(GPIOB,GPIO_Pin_5);	   //LED0��Ӧ����GPIOB.5���ߣ���  ��ͬLED0=1;
			GPIO_ResetBits(GPIOE,GPIO_Pin_5); //LED1��Ӧ����GPIOE.5���ͣ��� ��ͬLED1=0;
			delay_ms(300);                     //��ʱ300ms
	}
} 
 
 ****************************************************************************************************
 ***/
 

	
/**
*******************����ע�͵��Ĵ�����ͨ�� ֱ�Ӳ����Ĵ��� ��ʽʵ��IO�ڿ���**************************************
int main(void)
{ 
 
	delay_init();		  //��ʼ����ʱ����
	LED_Init();		        //��ʼ��LED�˿�
	while(1)
	{
     GPIOB->BRR=GPIO_Pin_5;//LED0��
	   GPIOE->BSRR=GPIO_Pin_5;//LED1��
		 delay_ms(300);
     GPIOB->BSRR=GPIO_Pin_5;//LED0��
	   GPIOE->BRR=GPIO_Pin_5;//LED1��
		 delay_ms(300);

	 }
 }
**************************************************************************************************
**/

