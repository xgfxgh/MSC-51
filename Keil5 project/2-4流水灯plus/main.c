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
int main()
{
	while(1)
	{
		P2 = 0xfe;
		Delay(500);
		P2 = 0xfd;
		Delay(500);
	}
}


