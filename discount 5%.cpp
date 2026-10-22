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
	printf("/ntotal bill ant=%.2f",bill);
	printf("/n discounter=%.2f",discount);
return 0;
}
