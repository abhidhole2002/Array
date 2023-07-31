/*#include <iostream>
using namespace std;

void separateOddEven(int arr[], int size, int odd[],int even[], int &odds,  int &evens)
{
    odds = 0;
    evens = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evens] = arr[i];
            evens++;
        } else {
            odd[odds] = arr[i];
            odds++;
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size = 10;
    int arr[size];
    
    for(int i=0;i<=size;i++)
    {
        arr[i] = i+1;
    }

    int oddArr[10];
    int evenArr[10];
    int oddSize, evenSize;

    separateOddEven(arr, size, oddArr, evenArr, oddSize, evenSize);

    cout << "Original Array: ";
    print(arr, size);

    cout << "\nOdd Array: ";
    print(oddArr, oddSize);

    cout << "\nEven Array: ";
    print(evenArr, evenSize);

    cout << "\nSize of Original Odd Array: " << oddSize;
    cout << "\nSize of Original Even Array: " << evenSize;
}
*/

#include<iostream>
using namespace std;

void even_odd(int arr[],int size,int odd[],int even[],int &s1,int &s2)
{
    

    for(int i=0;i<size;i++)
    {
        if(arr[i] %2 == 0)
        {
            even[s1] = arr[i];
            s1++;
        }

        else
        {
            odd[s2] = arr[i];
            s2++;
        }
    }
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    int size = 10;
    int arr[size];

    for(int i=0;i<=size;i++)
    {
        arr[i] = i+1;
    }

    int even[size],odd[size];
    int evensize ,oddsize ;
    evensize = oddsize = 0;

    print(arr,size);
    cout<<endl;

    even_odd(arr,size,odd,even,evensize,oddsize);
    print(even,evensize);
    cout<<endl;
    print(odd,oddsize);

    cout<<"\noriginal size : "<<size<<endl;
    cout<<"Even size : "<<evensize<<endl;
    cout<<"Odd size : "<<oddsize<<endl;
 
 
}