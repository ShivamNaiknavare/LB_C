//Accept 3 no.s from user and return avegrage of that 3 no.s

#include<stdio.h>

float Average(int iNo1, int iNo2 , int iNo3)
{
    float fAns = 0;
    fAns = ((float)(iNo1 + iNo2 + iNo3 ) / 3 );
    return fAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    float fRet = 0.0f;

    printf("Enter the first no...\n");
    scanf("%d",&iValue1);

    printf("Enter the second no...\n");
    scanf("%d",&iValue2);

    printf("Enter the third no...\n");
    scanf("%d",&iValue3);

    fRet = Average (iValue1,iValue2,iValue3);

    printf("Average of 3 no.s is %f...\n",fRet);

    return 0;

}