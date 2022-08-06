//WAP which accepts string from user and display it in reverse order 
//pblm
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

void Reverse(char *str)
{
    char * start=str;
    char * end = str;
    char temp;

    while(*end!='\0')
    {
        end++;
    }
    end--;
    while(start<=end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{

    char arr[20];
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);
    
    Reverse(arr);
    cout<<"Reverse of String is "<<arr<<endl;
    return 0;
}