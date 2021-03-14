#include<stdio.h>
int main()
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个数:",i+1);
		scanf("%d",&a[i]);
		printf("\n");
	}
		max=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("最大值是%d",max);
	return 0;
} 
