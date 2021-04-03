//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222
#include<stdio.h>
int sum(int i)
{
	int j;
	j=i+i*11+i*111+i*1111+i*11111;
	return j;
}
int main()
{
	int i,j;
	printf("请输入数字");
	scanf("%d",&i);
	j=sum(i);
	printf("sum=%d\n",j);
	return 0;
} 
