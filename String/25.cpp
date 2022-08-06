//Wap which accepts string from user and count number of white spaces
#include<stdio.h>
#include<iostream>
using namespace std;
void CountWhite(char *str) 
{
    int count=0;
    while(*str!='\0')
    {
        if(*str==' ')
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
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    CountWhite(arr);
    return 0;
} 