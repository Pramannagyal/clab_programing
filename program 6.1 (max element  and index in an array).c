#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int max = 0;
    for (int i = 1; i < 10 ; ++i)
{
    if (arr[max] < arr[i])
        max = i;
}
printf("maximum element of an array is  = %d at index %d", arr[max], max);
return 0;
}
