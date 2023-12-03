//Accept no from user and display that no of stars(*) 
 
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter no to dispaly no of *  on screen ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}