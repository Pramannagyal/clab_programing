#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);

    for( int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
              printf("the number is composite");
              break;
        }
    }

    return 0;
}
