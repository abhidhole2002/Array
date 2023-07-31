#include<iostream>
using namespace std;

void nth_min_max(int arr[],int size,int nth)
{
    int c = 0;
    int max = 0;

    for(int i=0;i<=size;i++)
    {
        for(int j = j+1;j<=size;i++)
        {
            if(arr[i] > arr[j])
            {
                int tdata = arr[i];
                arr[i] = arr[j];
                arr[j] = tdata;
            }
        }

        c++;

        if(c == nth)
        {
            max = arr[i];
        }
    }

    cout<<"MIN_MAX : "<<max<<endl;
}
 
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr)/sizeof(*arr);
    
    nth_min_max(arr,size,1);
 
}