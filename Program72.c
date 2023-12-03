//Accept n no from user & return count of all even no.s
#include<stdio.h>
#include<stdlib.h>
//void Display()int *Arr, int iSize)
int EvenCount(int Arr[], int iSize)      //arr is not array it is pointer
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt = iEvenCnt + 1;
        }
    
    }
    return iEvenCnt;
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
    
    iRet = EvenCount(ptr, iCount);   //display will pass what ptr contains & input no

    printf("Number of even elemnets are : %d\n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}