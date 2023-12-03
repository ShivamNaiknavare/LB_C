//Accept n no from user & return Addition of all no.s
#include<stdio.h>
#include<stdlib.h>
//void Display()int *Arr, int iSize)
int Addition(int Arr[], int iSize)      //arr is not array it is pointer
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iCount = 0, iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter the no of elements that you want to store : \n");
    scanf("%d",&iCount);

    ptr = (int * )malloc(iCount * sizeof(int));

    printf("Dynamic Memory gets allocated successfully for %d elements \n",iCount);

    printf("Enter the %d values : \n",iCount);
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the elements no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = Addition(ptr, iCount);   //display will pass what ptr contains & input no

    printf("Addition of all elemnets is : %d\n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}