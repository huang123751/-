//1.在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
#include<stdio.h>
int main()
{
	int i,j,k;
	for(k=1;k<=7;k++)
	{
		for(i=0;i<=7-k;i++)printf(" ");
		for(j=0;j<2*k-1;j++)printf("*");
	    printf("\n");
	}
	for(k=6;k>=1;k--)
	{
	    for(i=0;i<=7-k;i++)printf(" ");
		for(j=0;j<2*k-1;j++)printf("*");
		printf("\n");	
	}
	return 0;
} 
