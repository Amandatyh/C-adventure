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
//�������ܣ� ����ٷ�����a��b�����Լ��
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
 
