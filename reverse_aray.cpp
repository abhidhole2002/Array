#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int tail = size-1;

    for(int head = 0;head<tail;head++)
    {
        int tdata = arr[head];
        arr[head] = arr[tail];
        arr[tail] = tdata;

        tail--;
    }
  
}
 
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,size);
    
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
 
}