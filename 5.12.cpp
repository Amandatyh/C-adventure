#include <stdio.h>
#include <math.h>
int main()
{
	float h,w,t;
	printf("������������h���ף���");
	scanf("%f",&h);
	printf("�������������w��ǧ�ˣ���");
	scanf("%f",&w);
	t=w/pow(h,2);
	if(t<18)
	{
		printf("�������Ϊ��������\n");
	}
	else if(t>=18&&t<25)
	{
		printf("�������Ϊ����������\n");
	}
	else if(t>=25&&t<27)
	{
		printf("�������Ϊ����������\n");
    }
    else
    printf("�������Ϊ������\n");
}
