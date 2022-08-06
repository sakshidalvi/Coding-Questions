//Wap which  skips the white spaces and prints the string to
//works
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int StrWhite(char *src,char* dest)
{
   while(*src != '\0')
    {
       if(*src!=' ')
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

    StrWhite(arr,brr);
    cout<<"Ans is : "<<brr;

    return 0;
}