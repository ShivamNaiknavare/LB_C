//Program to print Decimal Octal HexaDecimal value of an Character
#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    printf("ASCII Value of character in Decimal : %d\n",ch);
    printf("ASCII Value of character in Octal is : %o\n",ch);
    printf("ASCII Value of character in HEXADECIMAL is : %x\n",ch);

    return 0;
}