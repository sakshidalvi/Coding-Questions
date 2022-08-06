//WAP which accept string from user and copy that characters into another string in reverse order.
//check 
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
void Reverse(char *str,char* dest)
{
    int n = strlen(str);
 
    strcpy(dest, str);
 
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(dest[i], dest[j]);
    }

    cout<<dest;
    
}
int main()
{
    char arr[30]="Hey I Am Sakshi";
    char brr[30];

    Reverse(arr,brr);

    return 0;
}