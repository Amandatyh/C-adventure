#include <stdio.h>
#include <math.h>
int main()
{
	int sum,a,b,c,d,i;
	for(sum=1000;sum<10000;sum++)
	{
		a=sum/1000;
		b=(sum-a*1000)/100;
		c=(sum-(a*1000+b*100))/10;
		d=sum%10;
		for(i=31;i<100;i++)
		{
			if(a==b&&c==d&&pow(i,2)==sum)
			{
				printf("i=%d\n",i);
				printf("³µºÅÊÇ:%d\n",sum);
			}
		}
	}
	return 0;
}
