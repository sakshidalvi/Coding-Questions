//WAP  which accepts string from user and check whether it contains vowels or not
//works
#include<stdio.h>
#include<iostream>
using namespace std;

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    
    while(*str!='\0')
    {
        if(*str =='A'||*str =='E'|| *str =='I'|| *str =='O'|| *str =='U'|| *str =='a'|| *str =='e'|| *str =='i'|| *str =='o'|| *str =='u')
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
    BOOL iRet= FALSE;

   
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    iRet=ChkVowel(arr);

    if(iRet==TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("No Vowel");
    }


    return 0;

}