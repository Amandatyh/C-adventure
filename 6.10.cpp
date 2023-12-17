#include <stdio.h>
#include <math.h>
int main(void)
{
	int sum,b0,b1,b2;
	for(sum=100;sum<1000;sum++)
	{
		b2=sum/100;
		b1=(sum-b2*100)/10;
		b0=sum%10;
		if((pow(b2,3)+pow(b1,3)+pow(b0,3))==sum)
		{
			printf("Ë®ÏÉ»¨Êýsum=%d\n",sum);
		}
	}
	return 0;
}
  
