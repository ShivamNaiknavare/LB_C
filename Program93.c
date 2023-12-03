//Input : 4
//Output : a    b   c   d           ----------- 2nd way
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}