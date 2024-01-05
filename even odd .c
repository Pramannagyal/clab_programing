#include<stdio.h>
void oddeven(int x)
{
    if(x%2==0)
        printf("the no is even");
    else
        printf("the no is odd");
}
int main()
{
    int n;
    printf("enter the no ");
    scanf("%d",&n);
    oddeven(n);//pass by value
    return 0;
}
