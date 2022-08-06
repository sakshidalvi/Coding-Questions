//Accept string and return number of letters in it
//String 
#include<iostream>
using namespace std;
int StringLength(char str[])
{
    int iCnt=0;
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter string:"<<endl;
    cin.getline( Arr, 20); //for dealing with blank space 
  
    iRet=StringLength(Arr);
    cout<<"length of string is: "<<iRet<<endl;

    return 0;
}