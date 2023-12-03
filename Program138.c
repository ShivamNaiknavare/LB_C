///Accept string & convert in small case 
#include<stdio.h>

void strlwrx(char str[])
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if(*str >= 'A' && *str <= 'Z')
    {
        *str = *str + 32;
    }
    str++;
  }  
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);    

    printf("Updates String in small case is : %s\n",Arr);

    return 0;
}