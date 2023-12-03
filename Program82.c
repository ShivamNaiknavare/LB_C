//Accept n no from user & return how much times 21 occurs in that no
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 21)
        {
            iFrequency = iFrequency + 1;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated successfully...\n");

    printf("Enter the elemnets : \n");
    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the element no %d : ",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr,iCount);
    printf("21 occurs %d times \n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully\n");

    return 0;
}