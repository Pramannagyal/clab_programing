#include<stdio.h>
int main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);

    if(age>=18&&age<=50)
    {
        if(age>=18&&age<=30)
        {
            printf("you are eligible for grade A job");
        }
        else
        {
            printf("you are eligible for grade B job");
        }

    }
    else
    {
        printf("you are eligible for grade C job");
    }
    return 0;
}
