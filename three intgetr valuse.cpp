#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enterthree integarvaluse");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greatestamongstthegiven valuse",a);
		}
		else
		{
			printf("%d is the greastest amongst the given valuse",c)
		}
	}
	else
	{
		if (b>c)
		{
			printf("%d is greatestamonngst the given values",b);
		}
		else
		{
			printf("%d is the greast amongest the given valuse",c);
		}
	}
	return o ;
}
