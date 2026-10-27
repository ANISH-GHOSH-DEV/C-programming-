#include<stdio.h>
int main()
{
    int n,i=1;
    int d=0,sum=0;
    printf("enter the number");
    scanf("%d",&n);//456
    {
        d=n%10;//(456%10=6)(45%10=5)(4%10=4);
        sum+=d;//6+5+4
        n/10;//(456/10=45)(45/10=4)(4/10=0)
    }
    printf("/n sum=%d",sum);
    return 0;
}
