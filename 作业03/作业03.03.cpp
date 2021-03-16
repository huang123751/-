//3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
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
	printf("出现的数字有%d\n",j);
	return 0;
} 
