#include<stdio.h>
int main()
{
    int number,i,j,temp;
    printf("enter the total number of element=");
    scanf("%d",&number);
    printf("enter the array element ");
    int a[number];
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<number-1;i++)
    {

        for(j=0;j<number-i-1;j++)
        {
            if(a[j]>a[j+i])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("list sorted in ascending order \n:");
    for(i=0;i<number;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
