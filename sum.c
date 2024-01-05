#include<stdio.h>
int sum(int x,int y)
{
  return x+y;
}
int main()
{
    int a ;
    printf("enter the no ");
    scanf("%d",&a);
    int b ;
    printf("enter the no ");
    scanf("%d",&b);
    sum(a,b);
    printf("the sum  is = %d",sum(a,b));
    return 0;
}

