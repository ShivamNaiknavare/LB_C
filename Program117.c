//Program to print ASCII table
#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("-------------------------------------------------------------------\n");
    printf("---------------------------ASCII TABLE-----------------------------\n");
    printf("-------------------------------------------------------------------\n");

    for(int iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("-------------------------------------------------------------------\n");

    return 0;
}   