#include <stdio.h>
int main()
{
	float score;
	printf("������ٷ��Ƴɼ�score��");
	scanf("%f",&score);
	if(score>=90&&score<=100)
	{
		printf("����Ƴɼ�grade��A\n");
	} 
	else if(score>=80&&score<90)
	{
		printf("����Ƴɼ�grade��B\n");
	}
	else if(score>=70&&score<80)
	{
		printf("����Ƴɼ�grade��C\n");
	}
	else if(score>=60&&score<70)
	{
		printf("����Ƴɼ�grade��D\n");
	}
	else
	printf("����Ƴɼ�grade��E\n");
}
