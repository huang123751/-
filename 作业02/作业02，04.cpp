#include<stdio.h>
int main()
{
	int i,j,a[3],q;
	i=0;
	while(i<3)
	{
		printf("�������%d����:",i+1);
		scanf("%d",&a[i]);
		i++; 
    }
    printf("ԭ��������˳���ǣ�%d %d %d\n",a[0],a[1],a[2]);
	for(j=0;j<3;j++)
	{
		if(a[j]<a[j+1])
		{
		q=a[j+1];
		a[j+1]=a[j];
		a[j]=q;	
		}
	}
	printf("�ɴ�С������˳���ǣ�%d %d %d",a[0],a[1],a[2]);
	return 0;
} 
