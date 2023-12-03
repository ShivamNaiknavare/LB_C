//Palindrome no -------------- 2nd way
#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(int iNo)
{
    int iCopy = iNo;             
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }

    return(iRev == iCopy);                  //2nd way change
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkPalindrome(iValue);
    if(bRet == true)
    {
        printf("%d is palindrome number ",iValue);
    }
    else
    {
        printf("%d is not a palindrome number ",iValue);
    }

    return 0;
}