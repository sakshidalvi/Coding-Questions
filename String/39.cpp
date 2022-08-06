//wap that copy one string to another by toggling the case
//works
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
       if((*src>='A')&&(*src<='Z'))
       {
            *src= *src+32;
             
       } 
       else if((*src>='a')&&(*src<='z'))
       {
            *src= *src-32;     
       }   
       * dest=* src;    
        dest++;
       
        src++;  
    } 
    return *src;
    
}
int main() 
{
    char arr[30]="Hey I Am Sakshi";
    char brr[30];

    StrCpyToggle(arr,brr);
    cout<<"Ans is:"<<brr;

    return 0;
}