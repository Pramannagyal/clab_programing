#include<stdio.h>
int min(int x,int y)//format parameters=container
{
   if(x<y)
    return x;
   else
    return y;
}
int main()
{
    int a ;
    printf("enter the no ");
    scanf("%d",&a);
    int b ;
    printf("enter the no ");
    scanf("%d",&b);
    int m=min(a,b);//actual paramaters==actual value
    printf("the minumum value is = %d",m);
    return 0;
}

