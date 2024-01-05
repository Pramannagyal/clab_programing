#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);

    for(i=0;i<b;i++)
    {
        a++;
    }
    printf("sum is = %d",a);
}
