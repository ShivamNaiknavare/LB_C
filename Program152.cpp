// Accept elements of Array & print addition of even elements  
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

        int AdditionEven()
        {
            int iSum = 0, iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iSum = iSum + Arr[iCnt];
                }
            }
            return iSum;
        }

};      //End of class

int main()
{
    int iLength = 0, iRet = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);                //dynamic object creation

    aobj->Accept();
    aobj->Display();

    iRet = aobj->AdditionEven();

    cout<<"Addition of Even elements is : "<<iRet<<endl;

    delete aobj;

    return 0;
}
