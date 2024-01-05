#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    //1-2+3-4...........n
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
            sum=sum+i;

        else
            sum=sum-i;
    }
    printf("sum of series is = %d",sum);
    return 0;
}
