#include<stdio.h>
int main()
/*
{
    int i=1;
    printf("%d\n",++i);
    printf("%d\n",i++);
    printf("%d\n",++i);
    printf("%d\n",++i);

    return 0;
}
*/

/*
{
    int i,j;
    i=10;
    j=i++ +i;
    printf("%d\n",j);


    return 0;
}
*/

{
    int i,j;
    i=10;
    j=i++ + ++i +  i++ + ++i ;
    printf("%d\n",j);


    return 0;
}
