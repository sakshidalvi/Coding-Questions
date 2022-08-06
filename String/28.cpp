//wap which accept string from user and accept one charcter . return index of first occurence of that chracter
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int FirstChar(char *Arr,char ch) 
{
    int i=0;
    int s=sizeof(Arr);
    for(i=0;i<s;i++)
    {
        if(Arr[i]==ch)
        { 
            return i;
        }
    }
    return -1;
}
int main()
{
    char arr[20];
    char cValue;
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    cout<<"Enter Character:"<<endl;
    cin>>cValue;

    int ret=FirstChar(arr,cValue);
    cout<<"First occurance is "<<ret<<endl;
    return 0;
} 