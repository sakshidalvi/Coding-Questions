//wap which accept string from user and accept one charcter . return frequency of that character
#include<stdio.h>
#include<iostream>
using namespace std;
void CountChar(char *str,char ch) 
{
    int count=0;
    while(*str!='\0')
    {
        if(*str==ch)
        { 
            count++;
        }
        str++;
    }
    printf("Count is: %d",count)  ;
}
int main()
{
    char arr[20];
    char cValue;
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    cout<<"Enter Character:"<<endl;
    cin>>cValue;

    CountChar(arr,cValue);
    return 0;
} 