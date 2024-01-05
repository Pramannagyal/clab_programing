#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);

    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        if(r%2!=0)
        sum=sum+r;
        n=n/10;
    }
    printf("the sum of digits is = %d",sum);
}

