#include <stdio.h>
int main(void)
{
	int a,b;
	for(a=1;a<=30;a++)
	{
		for(b=1;b<=30-a;b++)
		{
			if((a*3+b*2+(30-a-b))==50)
			printf("����=%d,Ů��=%d,С��=%d\n",a,b,30-a-b);
		}
	}
	return 0;
}
