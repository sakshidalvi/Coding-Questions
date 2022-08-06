//Wap which accept string from user and copy the contents of that string into another string (using strcpy())
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int StrCpy(char *src , char * dest)
{
    strcpy(dest, src);
    return *dest;
    
    /* while(*src != '\0')
    {
       * dest=* src; 
        src++;
        dest++;
    } */
}

int main()
{
    char arr[30]="Hey I am Sakshi";
    char brr[30];

    cout<<"1->"<<brr<<endl;
    StrCpy(arr,brr);

    cout<<"2->"<<brr<<endl;

    return 0;
}