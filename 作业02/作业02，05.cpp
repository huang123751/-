#include<stdio.h>
int greatestcommondivisor(int x,int y)
{
	while(1)
	{
		if(x>y)
		{
			x-=y;
		}
		else if(y>x)
		{
			y-=x;
		}
		else if(x==y)
		{
		return x;
		}
	}
}
int main()
{
	int a,b,c;
	printf("ÇëÊäÈë2¸öÊı£º");
	scanf("%d %d",&a,&b);
	c=greatestcommondivisor(a,b);
	printf("max=%d",c);
	return 0;
} 
