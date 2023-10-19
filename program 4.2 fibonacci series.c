#include<stdio.h>
int main()
{
  int n;
  printf("enter the number of terms\n");
  scanf("%d",&n);


int a,b,nextterm;
a=0;
b=1;
nextterm=a+b;
printf("the fibonacci series = %d,%d,",a,b);
for(int i=3;i<=n;++i)
{
    printf("%d,",nextterm);
    a=b;
    b=nextterm;
    nextterm=a+b;

}


return 0;

}



