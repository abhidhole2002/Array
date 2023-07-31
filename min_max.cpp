#include <iostream>
using namespace std;



void min_max(int arr[],int size,int &min,int &max)
{
    max = arr[0];
    min = arr[0];

    for(int i = 0;i<=size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 22, 33, 4, 55, 66, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min_val, max_val;
    min_max(arr, size, min_val, max_val);

    cout << "Minimum value: " << min_val << endl;
    cout << "Maximum value: " << max_val << endl;

    return 0;
}
