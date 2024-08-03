// InsertionSort Algorithm


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

        void InsertionSort();
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

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}
  

template <class T>
void ArrayX<T>::InsertionSort()
{
    int i = 0, j = 0;
    T selected;

    for(i =1 ; i < iSize; i++)
    {
        for(j = i -1, selected = Arr[i]; (j >= 0) && (Arr[j] > selected); j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j+1] = selected;
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

    aobj->InsertionSort();

    cout<<"\nData after sorting : \n";
    aobj->Display();

    delete aobj;
    
    return 0;
}