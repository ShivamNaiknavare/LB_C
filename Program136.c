///Accept string & instead of a replace _ in string
#include<stdio.h>

void Replace(char str[])
{
  while(*str != '\0')
  {
    if(*str == 'a')
    {
        *str = '_';
    }
    str++;
  }  
}

int main()
{
    char Arr[20];
    

    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);

    Replace(Arr);    //passing base address of Arr

    printf("Updated String  is : %s\n",Arr);

    return 0;
}