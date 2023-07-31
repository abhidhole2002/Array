#include <iostream>
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

int delete_head(int arr[],int &size)
{
    int head = arr[0];
    for (int i = 0;i<size;i++) {
        arr[i] = arr[i+1];
    }
    size--;
    return head;
}

int delete_tail(int arr[],int &size)
{
    int tail = arr[size];
    arr[size] = 0;
    size--;
    return tail;

}

int main() {
    int size = 10;
    int arr[size];

    array(arr, size);
    print(arr, size);
    cout<<endl<<"head : "<<delete_head(arr, size)<<endl;
    print(arr, size);
    cout<<endl<<"tail : "<<delete_tail(arr,size)<<endl;
    print(arr, size);
}
