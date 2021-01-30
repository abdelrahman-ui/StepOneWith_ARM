/*
 * main.c
 *
 *  Created on: Jan 28, 2021
 *      Author: Abdelrahman_Magdy
 */
/******************************************************************/



//include lib
#include"TYPES.h"
#include"MACROS.h"
//include MCAL
#include "RCC_interface.h"

#define PORTA_CRL  *((u32 *)0x40010800)
#define PORTA_ODR  *((u32 *)0x4001080c)
 void main (void)
{
	/*init clock system*/
	 RCC_voidInitSysClock();
	/*enable pre */
	 RCC_voidEnableClock(RCC_APB2,2);
	 PORTA_CRL=0X00000002;
	 PORTA_ODR=0X00000001;
	while(1){


  }
}
