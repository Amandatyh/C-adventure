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
//函数功能： 用递归方法计算a与b的最大公约数
int Gcd(int a,int b)
{
	if(a>b)
	{
		return (Gcd(a-b,b));
	}
	else if(b>a)
	{
		return (Gcd(a,b-a));
	}
	else
	{
		return a;
	}
}
