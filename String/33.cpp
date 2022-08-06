//wap which accepts string from user and copy the lower case contents of that string into new string
//works
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int StrCpy(char *src , char * dest)
{
    
    while(*src != '\0')
    {
       if((*src>='a')&&(*src<='z'))
       {
            * dest=* src;    
            dest++; 
       }   
        src++;  
    } 
    return *src;
}

int main()
{
    char arr[30]="Hey I Am Sakshi";
    char brr[30];

    StrCpy(arr,brr);

    cout<<brr<<endl;

    return 0;
}