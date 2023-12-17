#include<stdio.h>
int Gcd(int a,int b);
int main(void)
{
	int x,y;
	int ret;
	printf("请输入两个整数：");
	scanf("%d,%d",&x,&y);
	ret=Gcd(x,y);
	printf("%d",ret);
	return 0;
}
//函数功能： 用穷举法计算a与b的最大公约数
int Gcd(int a,int b)
{
	int i,t;
	int result;
	t=(a<b)?a:b;
	for (i=t;i>=1;i--)
	{
		if((a%i==0)&&(b%i==0))
        {
        	result=i;
        	break;
		}
	}
	return result;
}
 
