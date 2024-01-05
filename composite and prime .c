#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);

    int a=0;
    for( int i=2;i<n;i++)
    {
        if(n%i==0)
        {
               a=1;
               break;
        }

    }
    if(n==1)
        printf("the number is neither composite nor prime");
    else if(a==0)
        printf("the number is prime");
    else
        printf("the number is composite");

    return 0;
}
