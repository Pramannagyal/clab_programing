#include<stdio.h>
int main()
{
    int i,sum;
    sum=0;

    for(i=0;i<=10;i++)
    {
        sum=sum+i*i*i;
    }
    printf("the sum of cube of first 10 natural no = %d",sum);
    return 0;

}
