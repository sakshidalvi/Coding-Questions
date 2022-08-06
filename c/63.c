//Accept N numbers from user and accept one another number as NO, return frequency of NO from it.
#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iVal)
{
    int iCnt=0;
    int iNOCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iVal)
        {
            iNOCnt++;
        }
    }
    return iNOCnt;
}
int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
    int *p=NULL;

    printf("Enter size of elements\n");
    scanf("%d",&iSize);

    printf("Enter NO element:\n");
    scanf("%d",&iValue);

    p=(int *)malloc(iSize *sizeof(int));

    if(p==NULL)
    {
        printf("Error: Out of memory");
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Frequency(p,iSize,iValue);
    printf("Result is %d",iRet);
    free(p);

    return 0;
}