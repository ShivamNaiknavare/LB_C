//Problems on N No.s   ---- Accept elements of Array & print that elements  ---- dynamic obj creation
#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int x)        //Actual Parameterized constructor which allocates resources
        {
            iSize = x;
            Arr = new int[iSize];
        }

        ~Array()            //Destructor to deallocate above resources 
        {
            delete []Arr;
        }

        void Accept()       //Function to accept parameters in Array
        {
            int iCnt = 0;
            cout<<"Enter the Elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      //Function to print accepted parametrs
        {
            cout<<"Elements of the Array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
        /*
            LOGIC
        */

};      //End of class

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);                //dynamic object creation

    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}
