#include<stdio.h>
int main()
{
    int search,c,n;
    printf("enter number of element in array\n");
    scanf("%d",&n);
    int array[n];
    printf("enter %d integer\n",n);
    for(c=0;c<n;c++)
    {

        scanf("%d",&array[c]);
    }
    printf("enter a number to search\n");
    scanf("%d",&search);
    for(c=0;c<n;c++)
    {
        if(array[c]==search)
        {
            printf("%d is present at location %d\n",search,c);
            break;
        }
    }
    if(c==n)
    printf("%d isn't present in the array\n",search);
    return 0;
}
