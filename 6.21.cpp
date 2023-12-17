#include <stdio.h>
int main()
{
	int a,b,c;
	int counter1=0,counter2=0,counter3=0;
	int sum;
	for(c=0;c<168;c+=8)
	{
		for(b=0;b<147;b+=7)
	    {
		    if(b==c)
		    {
		    	printf("b=%d ",b);
				counter1++;
				printf("counter1=%d\n",counter1);
			}
	    }
	    for(a=0;a<126;a+=6)
		{
		    if(c==a)
			{
		    printf("a=%d ",a);
		    counter2++;
			printf("counter2=%d\n",counter2);
			}
	    }
	    printf("c=%d ",c);
		counter3++;
	    printf("counter3=%d\n",counter3);
	}
	sum=(21-counter1)+(21-counter2)+counter3;
	printf("观众总共可以听到礼炮声sum=%d",sum);
	return 0;  
}
 
