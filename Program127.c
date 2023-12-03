///Accept string & count no of occurance of a in the string
#include<stdio.h>

int Counta(char str[])
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if(*str == 'a')
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

    iRet = Counta(Arr);    //passing base address of Arr

    printf("Count of letter a is : %d\n",iRet);

    return 0;
}