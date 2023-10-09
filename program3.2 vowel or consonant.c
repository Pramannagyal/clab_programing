#include<stdio.h>
void main()
{
    int ch;
    printf("enter the character=");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='A'|| ch=='e'||ch=='E'|| ch=='i'||ch=='I'|| ch=='o'||ch=='O'|| ch=='u'||ch=='U')
    {
        printf("the character is vowel");
    }


    else
    {
       printf("the character is consonant");
    }
}

