//��ӡ100~200֮�������
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
//	printf("������");
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
//	printf("�����ǣ�");
//	sshu();
//	return 0;
//}
//2. ����˷��ھ���
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
//	printf("�žų˷������£�\n");
//	biao();
//	return 0;
//}
//3. �ж�1000��-- - 2000��֮�������
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
	printf("�����ǣ�");
	leap_year();
	return 0;
}
