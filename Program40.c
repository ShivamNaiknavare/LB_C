//Accept 1 no from user & check whether the no is Prime no or not 
//Another approach --> use of flag

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)             //Updator it will enter in if no is -ve. 
    {
        iNo = -iNo;         //It will Convert -ve into +ve.
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{   
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is a Prime Number \n",iValue);
    }
    else
    {
        printf("%d is not a Prime number \n",iValue);
    }

    return 0;
}