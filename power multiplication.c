#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a = ");
    scanf("%d",&a);
    int b;
    printf("enter the value of b = ");
    scanf("%d",&b);

    int power=1;
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("ans is  = %d ",power);



}
