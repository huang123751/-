//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	int i,j;
	printf("��һ�������ǣ�");
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("�ڶ��������ǣ�");
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
	printf("��һ�������ǣ�");
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("�ڶ��������ǣ�");
	for(i=0;i<5;i++)
	{
		printf(" %d",b[i]);
	}
	printf("\n");
	return 0;
} 
