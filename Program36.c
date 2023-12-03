//Accept 1 no from user & print Sum of factors of that accepted no - using time complexity
#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the no \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Sum of factors is %d \n",iRet);
    
    return 0;
}


//Time Complexity : O(N/2)