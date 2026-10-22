#include<stdio.h>
int main()
{
	float a, bill,discount;
	printf("entertheamount/n);
	scanf("%f",&a);
	if(a>=10000)
	{
		bill=a-(a*10/100);
		discount=a*10/100;
	}
	else
	{
		bill=a-(a*5/100);
		discount=a*5/100;
	}
	return 0;
}
