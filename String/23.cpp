//WAp which accepts string from user and toggle op
#include<stdio.h>
#include<iostream>
using namespace std;
void StrToggle(char *str) 
{
    while(*str!='\0')
    {
        if(*str >=65 && *str <=90)
        { 
            printf("%c",*str+32);
        }
        else if(*str >=97 && *str <=112)
        { 
            printf("%c",*str-32);
        }
        str++;
    }  
}
int main()
{
    char arr[20];
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    StrToggle(arr);
    return 0;
} 