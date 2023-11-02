#include<stdio.h>
int main()
{
    int n,sum=0,c,r;
    printf("enter the number = ");
    scanf("%d",&n);
    c=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(c==sum)
    {
        printf("The number entered is armstrong.");
    }
    else
    {
        printf("The number entered is not armstrong.");
    }

    return;
}
