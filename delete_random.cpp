#include<iostream>
using namespace std;

void array(int arr[], int size)
{
    for(int i = 0;i <=size;i++)
    {
        arr[i] = 10 + i;
    }
}

void print(int arr[], int size)
{
    for (int i = 0;i<=size;i++)
    {
        cout<<arr[i]<< " ";
    }
}

int delete_at_pos(int arr[],int &size,int pos)
{
    int del = arr[pos-1];
    for(int i=pos-1;i<size;i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    return del;
}

int delete_by_value(int arr[],int &size,int value)
{
    int pos = -1;
    for(int i=0;i<=size;i++)
    {
        if(arr[i] == value)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
    {
        //delete_at_pos(arr,size,pos+1);
        //OR
        int del = arr[pos];

        for(int i = pos;i<size;i++)
        {
            arr[i] = arr[i+1];
        }
        size--;
        return del;
    }

    
}


int main()
{
    int size = 10;
    int arr[size];

    array(arr,size);
    print(arr,size);
    cout<<endl;
    //cout<<endl<<delete_at_pos(arr,size,2)<<endl;
    delete_by_value(arr,size,19);
    print(arr,size);

 
 
}