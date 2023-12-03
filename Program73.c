//Accept n no from user & display all odd no.s
#include<stdio.h>
#include<stdlib.h>
//void Display()int *Arr, int iSize)
void DisplayOdd(int Arr[], int iSize)      //arr is not array it is pointer
{
    int iCnt = 0;

    printf("\n Odd Elements of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            printf("%d\t",Arr[iCnt]);
        }

    }
    printf("\n");
}

int main()
{
    int iCount = 0, iCnt = 0;
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
    
    DisplayOdd(ptr, iCount);   //display will pass what ptr contains & input no

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}