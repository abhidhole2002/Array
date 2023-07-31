#include <iostream>
using namespace std;

void remove_duplicates(int arr[], int size, int temp[], int &tsize)
{
    for (int i = 0; i < size; i++)
    {
        bool dupli = false;
        for (int j = 0; j < tsize; j++)
        {
            if (arr[i] == temp[j])
            {
                dupli =true;
                break;
            }
        }

        if (dupli == false)
        {
            temp[tsize] = arr[i];
            tsize++;
        }
    }
}


void remove_duplicates(int arr[], int &size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < index; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if (duplicate == false)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    size = index;
}



void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 44, 22, 33, 88,99, 100};
    int size = sizeof(arr) / sizeof(arr[0]);

    int temp[size];
    int tsize=0;

    //remove_duplicates(arr, size, temp, tsize);
    remove_duplicates(arr,size);

    cout<<"Original Array: ";
    print(arr, size);

    //cout<<"\nArray with Duplicates Removed: ";
    //print(temp, tsize);

}

