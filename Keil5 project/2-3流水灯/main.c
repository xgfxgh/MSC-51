#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}



int main()
{
	while(1)
	{
		P2 = 0xfe;
		Delay500ms();
		P2 = 0xfd;
		Delay500ms();
		P2 = 0xfb;
		Delay500ms();
		P2 = 0xf7;
		Delay500ms();
		P2 = 0xef;
		Delay500ms();
		P2 = 0xdf;
		Delay500ms();
		P2 = 0xbf;
		Delay500ms();
		P2 = 0x7f;
		Delay500ms();
	}
}
