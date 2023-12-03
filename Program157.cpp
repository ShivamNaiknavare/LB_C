//Problems on String ---- Accept String -- template -- 1st way using gets().
#include<iostream>
using namespace std;

class String
{
    private:
        char *str;

    public:
        String()                            //Default Constructor
        {   
            str = new char[20];
        }   

        String(int iSize)                   //Parameterized Constructor
        {
            str = new char[iSize];
        }

        ~String()                           //Destructor
        {
            delete []str;
        }

        void Accept()
        {
            cout<<"Enter the String : "<<endl;
            gets(str);
        }

        void Display()
        {
            cout<<"String is : "<<str<<endl;
        }

        /*

            LOGIC   

        */

};

int main()
{
    String sobj(30);

    sobj.Accept();
    sobj.Display();
    
    return 0;
}