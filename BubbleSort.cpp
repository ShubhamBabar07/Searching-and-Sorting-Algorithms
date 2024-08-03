// BubbleSort Algorithm


#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();

        void Accept();
        void Display();

        void BubbleSort();
};

template <class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i = 0;

    cout<<"Entered elements are : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}


template <class T>
void ArrayX<T>::BubbleSort()
{
    T temp;
    int i = 0, j = 0;

    for(i = 0; i < iSize; i++) 
    {  
        for(j = 0; j< iSize - 1 - i; j++)  
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
        
        Display();
    }
}   

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();

    cout<<"Data before sorting : \n";

    aobj->Display();

    aobj->BubbleSort();

    cout<<"Data after sorting : \n";
    aobj->Display();

    delete aobj;
    
    return 0;
}