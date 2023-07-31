#include<iostream>
using namespace std;

void array(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        arr[i] = i*10;
    }
}

void print(int arr[],int size)
{
    cout<<"array elements : ";
    for(int i=1;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    int size = 5;
    int arr[size];

    array(arr,size);
    print(arr,size);
 
 
}

/*
#include<iostream>
using namespace std;

void array(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        arr[i] = i*10;
    }
}

void print(int arr[],int size)
{
    cout<<"array elements : ";
    for(int i=1;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    int size = 5;
    int *arr = new int[size];

    array(arr,size);
    print(arr,size);
}
*/



