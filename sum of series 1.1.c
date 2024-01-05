#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);

    int sum=0;
    if(n%2==0)
        sum=-n/2;
    else
        sum=-n/2+n;

    printf("the sum = %d",sum);
}
