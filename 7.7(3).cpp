#include<stdio.h>
int Gcd(int a,int b);
int main(void)
{
	int x,y;
	int ret;
	printf("����������������");
	scanf("%d,%d",&x,&y);
	ret=Gcd(x,y);
	printf("%d",ret);
	return 0;
}
//�������ܣ� �õݹ鷽������a��b�����Լ��
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
