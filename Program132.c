///Accept string & count vowels frequency in the string (for case sensitive - i.e small)
#include<stdio.h>

int CountVowels(char str[])
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
    {
        iCnt++;
    }
    str++;
  } 
  return iCnt; 
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);    //passing base address of Arr

    printf("Count of Vowels is : %d\n",iRet);

    return 0;
}