//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	int i,j;
	printf("第一个数组是：");
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("第二个数组是：");
	for(i=0;i<5;i++)
	{
		printf(" %d",b[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	j=a[i];
	a[i]=b[i];
	b[i]=j;	
	} 
	printf("第一个数组是：");
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("第二个数组是：");
	for(i=0;i<5;i++)
	{
		printf(" %d",b[i]);
	}
	printf("\n");
	return 0;
} 
