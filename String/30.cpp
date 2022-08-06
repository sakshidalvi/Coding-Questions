//wap which accept string and reverse it in place
//pblm
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

void Reverse(char *str)
{
    int i=0;
    int s=strlen(str);
    int k=0;
    char new1[20];
    for(i=s-1;i>=0;i--)
    {
        new1[k++]=str[i--];
        cout<<new1[k-1]<<endl;
    }
    cout<<"Reverse of String is "<<new1<<endl;
    
}
int main()
{
    char arr[20];
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);
    
    Reverse(arr);
    //cout<<"Reverse of String is "<<arr<<endl;
    return 0;
}