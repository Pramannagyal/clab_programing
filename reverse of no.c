#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);

    printf("the reverse of no is= ");
    int r;
    while(n!=0)
    {
        r=n%10;
        n=n/10;

       printf("%d",r);
    }

}


