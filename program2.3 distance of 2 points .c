#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2;
    printf("enter the values of points");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);

    float distance;
    distance=sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
    printf("the distance between two points in a plane is=%f\n",distance);
    return 0;


}
