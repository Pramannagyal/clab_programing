#include<stdio.h>
int main()
{
    int number,i;
    unsigned long long factorial = 1;
    printf("enter a positive integer");
    scanf("%d",&number);

    if(number<0)
    {
        printf("error:factorial is not defined for negative number\n");
    }
    else
    {
        for(i=1;i<=number;++i)
        {

            factorial*=i;
        }
    printf("factorial of %d=%llu\n",number,factorial);
    }


    return 0;
}
