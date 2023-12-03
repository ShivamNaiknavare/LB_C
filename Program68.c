#include<stdio.h>           //for printf & scanf
#include<stdlib.h>          //for malloc & free
//to allocate memory & print ------2nd way

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }

}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the no of elements you want to store : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iCount);
    
    return 0;
}