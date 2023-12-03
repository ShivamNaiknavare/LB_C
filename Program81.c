//Accept n no from user & return Maximum & Minimum no
#include<stdio.h>
#include<stdlib.h>

void MaxMin(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("Maximum element is : %d\n",iMax);
    printf("Minimum element is : %d\n",iMin);
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0.0f;

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

    MaxMin(ptr,iCount);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully\n");

    return 0;
}