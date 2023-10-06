#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("the addition of a and b is=%d\n",c);
    c=a-b;
    printf("the subtraction of a and b is=%d\n",c);
    c=a*b;
    printf("the multiplication of a and b is=%d\n",c);
    c=a%b;
    printf("the remainder of a and b is=%d\n",c);
    return 0;
}
