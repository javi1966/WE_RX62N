#include    <machine.h> 
#include "delay.h"


#define GetInstructionClock() (96000000U)

void delay_10us(int  us)
{
	volatile unsigned long _dcnt;
  

	_dcnt = us *((unsigned long)(0.00001/(1.0/GetInstructionClock())/50));
    //    _dcnt = us  *   ((unsigned long) 12 *(0.00001/( 1.0/GetInstructionClock())));
	//while(_dcnt--){}
  
    while (--_dcnt)
    {
      
    }  
	
	
}

//*****************************************************************
void delay_ms(int ms)
{
    
    while(ms--)
    {
       // i=4;
      //  while(i--)
      //  {
            delay_us(1000);
      //  }
    }
}
//******************************************************************
void delay_us(int us)
{
  int i;
  while(--us < 0)
  {
    for(i=0;i<96;i++)
      nop();
  }
  
  
} 