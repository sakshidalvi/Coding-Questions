//Pattern printing-8
// 1 * 3 * 5 * 
#include<stdio.h>
void Display(int iVal)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iVal;iCnt++)
    {
        if(iCnt%2==0)
        {
         printf("*\t"); //dynamic data
        }
        else
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Please enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}