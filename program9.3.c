#include<stdio.h>
int fact(int);
void main()
{

    int a;
    printf("\n enter a positive no.");
    scanf("%d",&a);
    printf("factorial of %d=%d",a,fact(a));
}
int fact(int x)
{
 if(x>=1)
    return x*fact(x-1);
 else
    return 1;
}
