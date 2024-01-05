#include<stdio.h>
#include<math.h>
int fact(int n)
{
  int f=1;
  for(int i=1;i<=n;i++)
  {
      f=f*i;
  } return f;
}

int ncr(int n , int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n;
    printf("enter n ");
    scanf("%d",&n);
   for(int i=0;i<=n;i++)
   {
       for(int k=0;k<=n-i-1;k++)
       printf(" ");
      for(int j=0;j<=i;j++)
      {
        int x=ncr(i,j);
       printf("%d ",x);
      }
      printf("\n");
   }

return 0;

}
