#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);

    int a=100;
    //  for(int i=0;a>0;i++)  //  for(int i=0;i<=34;i++)
    for(int i=0;i<=n;i++)
    {
        printf(" %d ",a);
        a=a-3;
    }
}
