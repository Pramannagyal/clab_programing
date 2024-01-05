#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);

    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("the no of digits is = %d",count);
}
