//Problems on N No.s   ---- Accept elements of Array & print that elements  ---- static obj creation
#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor which allocates resources
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor to deallocate above resoruces
        {   
            delete []Arr;
        }

        void Accept()       // Member function to accept parameter in Array
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

        // Logics

};  // End of class

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();
    
    return 0;
}


