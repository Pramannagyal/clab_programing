#include<stdio.h>
int file(int n)
{
    if(n<=1)
        return n;
    else
        return file(n-1)+file(n-2);
}
void file1(int n,int i)
{
    if (i<n)
    {

        printf("%d\n",file(i));
        file1(n,i+1);
    }
}
int main()
{
    int n;
    printf("enter the number of terms=");
    scanf("%d",&n);
    printf("fibonacci sequence:\n");
    file1(n,0);
}
