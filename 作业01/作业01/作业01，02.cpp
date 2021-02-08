//2. 输出乘法口诀表
#include<stdio.h>
void biao()
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i+1; j++)
		{
			printf("%d*%d=%d   ", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	printf("九九乘法表如下：\n");
	biao();
	return 0;
}