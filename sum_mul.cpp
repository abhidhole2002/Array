#include<iostream>
using namespace std;

void sum_multiplication(int arr[],int size)
{
    int sum = 0;
    int mul = 1;

    for(int i=0;i<=size;i++)
    {
        sum = sum + arr[i];
    }

    for(int i=0;i<=size;i++)
    {
        mul = mul*arr[i];
    }

    cout<<"sum of all = "<<sum;
    cout<<"\nMultiplication of all = "<<mul;
}
 
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(*arr);

    sum_multiplication(arr,size);
}