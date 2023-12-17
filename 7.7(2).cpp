#include<stdio.h>
int Gcd(int a,int b);
int main(void)
{
	int x,y;
	int ret;
	printf("请输入两个整数(x>y)：");
	scanf("%d,%d",&x,&y);
	ret=Gcd(x,y);
	printf("%d",ret);
	return 0;
}
//函数功能： 用欧几里得算法计算a与b的最大公约数
int Gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return (Gcd(b,a%b));
	}
}
