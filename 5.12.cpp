#include <stdio.h>
#include <math.h>
int main()
{
	float h,w,t;
	printf("请输入你的身高h（米）：");
	scanf("%f",&h);
	printf("请输入你的体重w（千克）：");
	scanf("%f",&w);
	t=w/pow(h,2);
	if(t<18)
	{
		printf("你的体重为：低体重\n");
	}
	else if(t>=18&&t<25)
	{
		printf("你的体重为：正常体重\n");
	}
	else if(t>=25&&t<27)
	{
		printf("你的体重为：超重体重\n");
    }
    else
    printf("你的体重为：肥胖\n");
}
