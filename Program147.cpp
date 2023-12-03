//Accept no from user & Count Factorial of that no  --- using OOP approach -- class design template
#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
        Number(int x)                   //Parameterized Constructor
        {
            iNo = x;
        }    
    /*
    
        LOGIC
        
    */

};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    Number nobj(iValue);

    return 0;
}