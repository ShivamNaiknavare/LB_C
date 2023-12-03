//Problems on String ---- Accept String 2nd way using getline() -- template
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
            str = new char[20];
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