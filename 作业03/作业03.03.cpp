//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9��
#include<stdio.h>
int main()
{
	int i,j=0;
	for(i=1;i<101;i++)
	{
		if(i%10==9)
		{
			++j;
		}
		if(i/9==9)
		{
			++j;
		}
	} 
	printf("���ֵ�������%d\n",j);
	return 0;
} 
