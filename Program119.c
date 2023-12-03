//Program to chk letter is small or not
#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))   
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = ChkSmall(ch);
    if(bRet == true)
    {
        printf("It is small letter\n");
    }
    else
    {
        printf("It is not small letter\n");
    }

    return 0;
}   