#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms)
	{
		_nop_();
	  i = 2;
	  j = 199;
	  do
	  {
		  while (--j);	  
		} while (--i);
		
	  xms--;
	}

	
}

unsigned char LEDnum;


int main()
{
	P2 = ~0x01;
	while(1)
	{
		if(P3_1 == 0)
		{
				Delay(20);
			while(P3_1 == 0);
				Delay(20);
			
			LEDnum++;
			if(LEDnum>=8)
				LEDnum = 0;
			P2 = ~(0x01<<LEDnum);
		}			
	}
}
