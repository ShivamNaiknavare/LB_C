//School application -->    Using if else if ladder
#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard == 1)
    {
        printf("Your Exam is at 8 AM...\n");
    }
    else if(iStandard == 2)
    {
        printf("Your Exam is at 9 AM...\n");
    }
    else if(iStandard == 3)
    {
        printf("Your Exam is at 10 AM...\n");
    }
    else if(iStandard == 4)
    {
        printf("Your Exam is at 11 AM...\n");
    }
    else if(iStandard == 5)
    {
        printf("Your Exam is at 12 NOON...\n");
    }
    else
    {
        printf("Wrong Standard...\n");
    }
}

int main()
{
    auto int iValue = 0;

    printf("Enter Your Standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}