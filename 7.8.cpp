#include<stdio.h>
int Coco(int n);
int main()
{
	int m,ret;
	m=1;
    ret=Coco(m);
	printf("ԭ�����Ҭ��������%d��",ret);
	return 0;
}
//�������ܣ��õ���������Ҭ�ӵĸ���
int Coco(int n)
{
	int i,result;
	for(i=1;i<=5;i++)
	{
		if(i==1)
		{
			result=n;
	    }
		if(result%5==1)
		{
			result=(result-1)/5*4;
		}
		else
		{
			n++;
			i=0;
		}
	}
	return n;
} 
