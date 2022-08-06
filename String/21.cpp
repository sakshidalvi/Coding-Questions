//WAp which accepts string from user and convert it into lower case string
#include<stdio.h>
#include<iostream>
using namespace std;
void StrLower(char *str) 
{
    while(*str!='\0')
    {
        if(*str >=65 && *str <=90)
        { 
            printf("%c",*str+32);
        }
        else
        {
            printf("%c",*str);
        }
        str++;
     
    }  
}
int main()
{
    char arr[20];
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    StrLower(arr);
    return 0;
} 