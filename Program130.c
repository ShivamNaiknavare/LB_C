///Accept string & count all capital characters in the string
#include<stdio.h>

int CountCapital(char str[])
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);    //passing base address of Arr

    printf("Count of capital letter is : %d\n",iRet);

    return 0;
}