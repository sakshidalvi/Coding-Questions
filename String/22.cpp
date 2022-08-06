//WAp which accepts string from user and convert it into UPPER case string
#include<stdio.h>
#include<iostream>
using namespace std;
void StrUpper(char *str) 
{
    while(*str!='\0')
    {
        if(*str >=97 && *str <=112)
        { 
            *str=*str-32;
            printf("%c",*str);
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

    StrUpper(arr);
    return 0;
} 