#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    //1+2+3+4.....n
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of the series = %d",sum);
    return 0;
}
