//Pattern printing-25
// Row =4 , Column =4 
//using nested loops
/*
A   
B   B   
C   C   C   
D   D   D   D
*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i=0,j=0;
    char ch='\0';
    for(i=1,ch='A';i<=iRow;i++,ch++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    } 
}
int main()
{
    int iValue1=0, iValue2=0;
    printf("Please enter the value of Row :\n");
    scanf("%d",&iValue1);

    printf("Please enter the value of Column :\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);
    return 0;
}