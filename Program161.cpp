//Problems on String ---- Count Capital     ---------- important problem
#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;

    public:
        String()                            //Default Constructor
        {   
            iSize = 20;
            str = new char[iSize];
        }   

        String(int X)                   //Parameterized Constructor
        {
            iSize = X;
            str = new char[iSize];
        }

        ~String()                           //Destructor
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"Enter the String : "<<endl;
            cin.getline(str,iSize);
        }

        void Display()
        {
            cout<<"String is : "<<str<<endl;
        }

        int CountCapital()
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
    

};

int main()
{
    String *sobj1 = new String(30);
    int iRet = 0;

    sobj1->Accept();
    sobj1->Display();

    iRet = sobj1->CountCapital();

    cout<<"Capital Count is : "<<iRet<<endl;

    sobj1->Display();

    delete sobj1;
    
    return 0;
}