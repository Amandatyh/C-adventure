#include <stdio.h> 
#include <math.h>
int main(void)
{
	float a,b,c,x1,x2;
	printf("Input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%f\n",x1);
	printf("x2=%f\n",x2);
	return 0;
}
