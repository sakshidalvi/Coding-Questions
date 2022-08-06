//Pattern printing-14 with updater
// Row =4 , Column =4 
/*

$   2   3   4
1   $   3   4
1   2   $   4
1   2   3   $

*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
    int i=0,j=0;

    if(iRow!=iCol)
    {
        printf("Invaild input\n");
        return;
    }
    for(i=1;i<=iRow;i++) //outer 
    {
        for(j=1;j<=iCol;j++) //inner
        {
            if(i==j) 
            {
                printf("$\t");
            }
            else{
                printf("%d\t",j);
            }
            
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