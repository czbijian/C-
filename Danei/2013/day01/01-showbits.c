#include <stdio.h>

typedef unsigned char uc;

void showbits(int var)
{
	uc byte;
	uc *p = (uc*)&var;
	int j ;
	for(j = 0; j < 4;j++){
		byte = *p;
		int i ;
		for(i = 0; i < 8; i++){
			if(0x80 & byte) 
				putchar('1');
			else 
				putchar('0');
			byte = byte << 1;//byte<<=1;
		}
		putchar(' ');
		p++;
	}
	puts("");//printf("\n");
}
int main()
{
	int v1 = 0x61626364;
	showbits(v1);
	return 0;
}

