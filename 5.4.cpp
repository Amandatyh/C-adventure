#include <stdio.h>
#include <math.h>
int main()
{
	float p,f;
	int n;
	printf("�������Ǯ�ı���p��");
	scanf("%f",&p); 
	printf("�������Ǯ������n��");
	scanf("%d",&n);
	switch(n)
	{
		case 1:f=p*pow(1+0.0225,n);
		break;
		case 2:f=p*pow(1+0.0243,n);
		break;
		case 3:f=p*pow(1+0.0270,n);
		break;
		case 5:f=p*pow(1+0.0288,n);
		break;
		case 8:f=p*pow(1+0.0300,n);
		break;
	}
	printf("����֮�ͣ�%f\n",f);
}
