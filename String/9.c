//Accept character from user and check whether it is Small alphabet or not (a-z ).
//works
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 97 && ch <=122)
    {
      return TRUE;  
    }
    return FALSE;
}


int main()
{
    char cValue='\0';
    BOOL bRet= FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet= ChkSmall(cValue);

    if(bRet==TRUE)
    {
        printf("It is Small Case\n");
    }
    else
    {
        printf("It is not Small Case\n");
    }
    return 0;
}