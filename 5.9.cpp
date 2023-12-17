#include <stdio.h>
int main()
{
	float score;
	printf("请输入百分制成绩score：");
	scanf("%f",&score);
	if(score>=90&&score<=100)
	{
		printf("五分制成绩grade：A\n");
	} 
	else if(score>=80&&score<90)
	{
		printf("五分制成绩grade：B\n");
	}
	else if(score>=70&&score<80)
	{
		printf("五分制成绩grade：C\n");
	}
	else if(score>=60&&score<70)
	{
		printf("五分制成绩grade：D\n");
	}
	else
	printf("五分制成绩grade：E\n");
}
