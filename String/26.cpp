//wap which accept string from user and accept one charcter . check whether that character is present or not 
#include<stdio.h>
#include<iostream>
using namespace std;

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    
    while(*str!='\0')
    {
        if(*str==ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    char cValue;
    BOOL iRet= FALSE;

   
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    cout<<"Enter Character:"<<endl;
    cin>>cValue;

    iRet=ChkChar(arr,cValue);

    if(iRet==TRUE)
    {
        printf("Contains Char");
    }
    else
    {
        printf("No Char");
    }


    return 0;

}