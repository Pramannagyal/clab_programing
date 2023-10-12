#include<stdio.h>
#include<math.h>
void main()
{
    int ch;
    printf("1.circle\n2.rectangle\n3.square\nenter your choice:-\n ");
    scanf("%d",&ch);

    switch(ch)
    {
      case 1:
          {
              int r;
              printf("enter the value of radius");
              scanf("%d",&r);
              float area,peri;
              area=3.14*r*r;
              peri=2*3.14*r;
              printf("the area of circle is=%f\n",area);
              printf("the perimeter of circle is=%f\n",peri);
              break;
          }

      case 2:
          {
              int l,b;
              printf("enter the value of length and breath");
              scanf("%d%d",&l,&b);
              float area1,peri1;
              area1=l*b;
              peri1=2*l+2*b;
              printf("the area of rectangle is=%f\n",area1);
              printf("the perimeter of rectangle is=%f\n",peri1);
              break;
          }

       case 3:
          {
              int side;
              printf("enter the value of side");
              scanf("%d",&side);
              float area2,peri2;
              area2=side*side;
              peri2=4*side;
              printf("the area of square is=%f\n",area2);
              printf("the perimeter of square is=%f\n",peri2);
              break;
          }




    }



}
