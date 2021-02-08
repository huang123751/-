//打印100~200之间的素数
//#include<stdio.h>
//void shishu()
//{
//	int i, j;
//	for (i = 100; i < 201; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if(i%j == 0)
//			break;
//		}
//		if (i==j)
//		{
//			printf("%d  ", i);
//		}
//	}
//}
//int main()
//{
//	printf("素数是");
//	shishu();
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//void sshu()
//{
//	int i, j;
//	for (i = 101; i < 201; i++)
//	{
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
			/*printf("%d ", i);
		}
	}
}*/
////int main()
//{
//	printf("素数是；");
//	sshu();
//	return 0;
//}
//2. 输出乘法口诀表
//#include<stdio.h>
//void biao()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d*%d=%d   ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	printf("九九乘法表如下：\n");
//	biao();
//	return 0;
//}
//3. 判断1000年-- - 2000年之间的闰年
#include<stdio.h>
void leap_year()
{
	int i;
	for (i = 1000; i < 2001; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d  ", i);
		}
	}
}
int main()
{
	printf("闰年是；");
	leap_year();
	return 0;
}
