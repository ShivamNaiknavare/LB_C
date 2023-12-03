///Accept string & convert in upper case 
#include<stdio.h>

void struprx(char str[])
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if(*str >= 'a' && *str <= 'z')
    {
        *str = *str - 32;
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

    struprx(Arr);    

    printf("Updates String in Upper case is : %s\n",Arr);

    return 0;
}