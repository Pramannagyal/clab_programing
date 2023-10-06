#include<stdio.h>
int main()
{
int r,b,l,a;
printf("enter the vlaue of r,b,l and a");
scanf("%d%d%d%d",&r,&b,&l,&a);

float area1,peri1,area2,peri2,area3,peri3;
area1=3.14*r*r;
peri1=2*3.14*r;
area2=l*b;
peri2=2*(l+b);
area3=a*a;
peri3=4*a;

printf("the area of circle is=%f\n",area1);
printf("the perimeter of circle is=%f\n",peri1);
printf("the area of rectangle is=%f\n",area2);
printf("the perimeter of rectangle is=%f\n",peri2);
printf("the area of square is=%f\n",area3);
printf("the perimeter of square is=%f\n",peri3);

return 0;
}
