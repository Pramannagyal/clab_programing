#include<stdio.h>
#include<math.h>
int main()
{
    int n ;
    printf("enter the no ");
    scanf("%d",&n);
    int a ;
    printf("enter the no ");
    scanf("%d",&a);
    int b ;
    printf("enter the no ");
    scanf("%d",&b);

    int root = sqrt(n);
    printf("the sq of %d is = %d\n",n,root);

    int rooot = cbrt(n);
    printf("the cube root of %d is = %d\n",n,rooot);

    int p=pow(a,b);
    printf("the ans is = %d",p);

    return 0;
}


