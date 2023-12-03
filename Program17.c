//Accept Marks and out of marks from user and calculate the percentage

#include<stdio.h>

float CalculatePercentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;

    if((iMarks < 0) || (iTotal < 0))  //Filter     CHANGE2
    {
        printf("Invalid Input\n");
        return fPercentage;
    }
    if(iMarks > iTotal )                    //Filter    CHANGE 1
    {
        printf("Invalid Input\n");
        return fPercentage;
    }

    fPercentage = (((float)iMarks / (float)iTotal) * 100);
    return fPercentage;
}

int main()
{
   auto int iValue1 = 0;
   auto int iValue2 = 0;
   auto float fRet = 0.0f;

    printf("Enter the Marks \n");
    scanf("%d",&iValue1);

    printf("Enter the total Marks \n");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue1,iValue2);

    printf("Your Percentage is : %f\n",fRet);

    return 0;
}