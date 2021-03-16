#include<stdio.h>
int main()
{
	int i;
	double sum=0;
	for(i=1;i<101;i++)
	{
		if(i%2==0)
		{
			sum=sum-1.0/i;
		}
	else	
	    {
			sum=sum+1.0/i;
		}
	}
	printf("sum=%lf",sum);
	return 0;
}
//2. ¼ÆËã1/1-1/2+1/3-1/4+1/5 ¡­¡­ + 1/99 - 1/100 µÄÖµ¡£//
