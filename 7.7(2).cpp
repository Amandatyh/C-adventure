#include<stdio.h>
int Gcd(int a,int b);
int main(void)
{
	int x,y;
	int ret;
	printf("��������������(x>y)��");
	scanf("%d,%d",&x,&y);
	ret=Gcd(x,y);
	printf("%d",ret);
	return 0;
}
//�������ܣ� ��ŷ������㷨����a��b�����Լ��
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
