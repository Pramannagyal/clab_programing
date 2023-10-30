#include<stdio.h>
int main()
{
  int n,factor=0,i=1;
  printf("enter the number = ");
  scanf("%d",&n);

  while(i<=n)
  {
      if(n%i==0)
      {
          factor++;
      }
          i++;
  }

  if(factor==2)
  {
      printf("the number entered is a prime number");
  }
  else
  {
      printf("the number entered is not a prime number");
  }



  return 0;

}
