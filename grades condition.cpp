#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("gradeA");
	}
	else if(marks>=75)
	{
		printf("gradeB");
	}
	else if(marks>=50)
	{
		printf("gradeC");
	}
	else
	{
		printf("fail");
	}
	return 0;
	
}
