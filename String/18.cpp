//WAP  which accepts string from user and return difference between frequency of small characters and frequency of capital characters.
//works
#include<stdio.h>
#include<iostream>
using namespace std;

int CountSmall(char *str)
{
    int iBig=0, iSmall=0;
    
    while(*str!='\0')
    {
        if(*str>=65 && *str<=90)
        {
            iBig++;
        }
       
        else if(*str>=97 && *str<=122)
        {
            iSmall++;
        }

        str++;
    }
    return abs(iBig-iSmall);
    

}
int main()
{
    char arr[20];
    int iRet= 0;

   
    cout<<"Enter string:"<<endl;
    cin.getline( arr, 20);

    iRet=CountSmall(arr);

    printf("Count is : %d",iRet);

    return 0;

}