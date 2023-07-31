#include<iostream>
using namespace std;

void array(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
        arr[i] = 10+i;
    }
}

void print(int arr[],int size)
{
    cout<<"array elements : ";
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<< " ";
    }
}

void add_front(int arr[],int &size,int ele)
{
    size++;
    for(int i = size;i>0;i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = ele;  
}

void add_end(int arr[], int &size, int ele)
{
    size++;
    arr[size] = ele;
}

 
int main()
{
    int size = 10;
    int arr[size];

    array(arr,size);
    add_front(arr,size,101);
    add_end(arr,size,2000);
    print(arr,size);

}