//Accept character from user and check whether it is captical alphabet or not (A-Z ).
//works
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 65 && ch <=90)
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

    bRet= ChkCapital(cValue);

    if(bRet==TRUE)
    {
        printf("It is Capital\n");
    }
    else
    {
        printf("It is not Capital\n");
    }
    return 0;
}