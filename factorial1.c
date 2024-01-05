#include<stdio.h>
int main()
{
    int n;
    printf("enter the no = ");
    scanf("%d",&n);

    unsigned long long factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
    printf("the factorial of %d = %llu",n,factorial);
}
