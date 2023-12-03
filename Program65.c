#include<stdio.h>           //for printf & scanf
#include<stdlib.h>          //for malloc & free
//To allocate memory dynamically
int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the no of elements you want to store : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");

    // scanf("%d",&ptr[0]);
    // scanf("%d",&ptr[1]);
    // scanf("%d",&ptr[2]);
    // scanf("%d",&ptr[3]);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter elements are : \n");

    return 0;
}