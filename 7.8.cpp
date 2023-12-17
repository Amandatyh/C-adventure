#include<stdio.h>
int Coco(int n);
int main()
{
	int m,ret;
	m=1;
    ret=Coco(m);
	printf("原来这堆椰子至少有%d个",ret);
	return 0;
}
//函数功能：用迭代法计算椰子的个数
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
