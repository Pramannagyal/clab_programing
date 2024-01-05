#include<stdio.h>//header file
#include<string.h>//header file

void main()
{
    char pswd[10];
    printf("enter the password = ");
    scanf("%s",&pswd);

    int uc=0,lc=0,dc=0,sc=0,scc=0,length=0;
    //uc=upper character,lc=lower character,dc=digit character,sc=space character,scc=special character
    for(int i=0;pswd[i]!='\0';i++)
    {
        if(isupper(pswd[i]))
        uc++;
        if(islower(pswd[i]))
        lc++;
        if(isdigit(pswd[i]))
        dc++;
        if(isspace(pswd[i]))
        sc++;
        length++;
    }

    if(uc<1||lc<1||dc<1||sc>0||length<8)
    {
        printf("the password is not valid");
    }
    else
    {
        printf("the password is valid");
    }
}
