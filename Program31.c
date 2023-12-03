//Program to accept number from user & print that no in reverse order 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf(" %d \n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter no you want to dispaly on screen ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}