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
        cout<<*(arr+i)<<" ";
    }
}

void add_random(int arr[],int &size,int pos,int ele)
{
    size++;

    for(int i=size;i>pos-1;i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = ele;
    
}
 
int main()
{
    int size= 10;
    int arr[size];

    array(arr,size);
    print(arr,size);
    add_random(arr,size,3,12000);
    cout<<endl;
    print(arr,size);

 
 
}