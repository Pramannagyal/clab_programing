#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the length = ");
    scanf("%d",&l);
    printf("enter the breath = ");
    scanf("%d",&b);

    int area,peri;
    area=l*b;
    peri=2*(l+b);

   if(area>peri)
    printf("the area is greater than perimeter");

   else
    printf("the area is not greater than perimeter");
}
