#include<stdio.h>
int main()
{
    int row;
    printf("enter the no of row ");
    scanf("%d",&row);

    int column;
    printf("enter the no of column ");
    scanf("%d",&column);

    for(int i=0;i<=row;i++)
    {
      for(int j=0;j<=column;j++)
      {
        printf(" * ");
      }
        printf("\n");
    }
    return 0;
}
