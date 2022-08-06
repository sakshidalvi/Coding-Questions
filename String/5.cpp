//Count the occurance of letter "L" or "l"
//String 
#include<iostream>
using namespace std;
int OccuranceL(char str[])
{
    int iCnt=0;
    while(*str!='\0')
    {
        if(*str == 'L' || *str == 'l')
        {
            iCnt++;
        }
        
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
  
    iRet=OccuranceL(Arr);
    cout<<"String contails L for : "<<iRet<<" times"<<endl;

    return 0;
}