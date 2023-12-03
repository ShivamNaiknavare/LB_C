//Program to chk letter is captial or not
#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))   //instead of A & Z we can write ASCII value of A & Z
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

    bRet = ChkCapital(ch);
    if(bRet == true)
    {
        printf("It is captial letter\n");
    }
    else
    {
        printf("It is not capital letter\n");
    }

    return 0;
}   