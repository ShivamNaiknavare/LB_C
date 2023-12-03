//Accept 3 no.s from user and return largest among 3

#include<stdio.h>

Maximum(int iNo1 , int iNo2, int iNo3)
{
    if((iNo1 >= iNo2) && (iNo1 >= iNo3 ))
    {
        return iNo1;
    }
    else if((iNo2 >= iNo1) && (iNo2 >= iNo3 ))
    {
        return iNo2;
    }
    else 
    {
        return iNo3;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter 1st no...\n");
    scanf("%d",&iValue1);

    printf("Enter 2nd no...\n");
    scanf("%d",&iValue2);

    printf("Enter 3rd no...\n");
    scanf("%d",&iValue3);

    iRet = Maximum(iValue1,iValue2,iValue3);

    printf("Largest no is %d...\n",iRet);

    return 0;
}