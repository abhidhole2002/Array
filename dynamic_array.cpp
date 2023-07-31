#include<iostream>
using namespace std;
 
int main()
{
    int *arr = new int[10];

    cout<<"enter 10 elements : ";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<"array elements : ";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"another method : ";
    for(int i=0;i<10;i++)
    {
        cout<<*(arr+i)<<" ";
    }

    delete[] arr;
 
}
