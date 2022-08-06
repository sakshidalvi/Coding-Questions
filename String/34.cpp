//wap which accepts 2 string from user and concat second string after first (use strcat)

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void StrCat(char *src , char * dest)
{  
    strcat(src,dest);
    cout<<src<<endl;

}

int main()
{
    char arr[30]="Hey I Am ";
    char brr[30]="Sakshi Dalvi";

    StrCat(arr,brr);

    return 0;
}