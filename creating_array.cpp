#include<iostream>
using namespace std;
 
int main()
{
    int size;
    cout<<"enter size of array : ";
    cin>>size;

    int a[size];

    /*cout<<"enter "<<size<<" elements in array : ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }*/

    //OR

    for(int i=0;i<size;i++)
    {
        a[i] = i*2;
    }

    cout<<"elements of array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
 
 
}