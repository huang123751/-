#include<stdio.h>
int main()
{
	int a,b,c;
	printf("������2������:\n"); 
	scanf("%d",&a);
	scanf("%d",&b);
	printf("a=%d,b=%d\n",a,b);
	c=b;
	b=a;
	a=c;
	printf("a=%d,b=%d",a,b);
	return 0;
}
