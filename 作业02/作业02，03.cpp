#include<stdio.h>
int main()
{
	int a[10],i,max;
	for(i=0;i<10;i++)
	{
		printf("�������%d����:",i+1);
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
	printf("���ֵ��%d",max);
	return 0;
} 
