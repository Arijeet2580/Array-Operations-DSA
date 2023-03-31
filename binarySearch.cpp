#include <bits/stdc++.h>
#include <string>
using namespace std;
// int linearSearch(int arr[], int size, int element)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == element)
//         {
//             return i;
//         }
//     }
//     cout<<"Element not found"<<endl;
//     exit(0);
// }
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    high = size - 1;
    low = 0;
    mid = (low + high) / 2;
    if (low <= high)
    {
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    else
    {
        cout << "ELement not found" << endl;
        exit(0);
    }
}
int main()
{
    //           0  1  2   3   4   5   6
    int arr[] = {1, 3, 5, 56, 64, 73, 123};
    int size = sizeof(arr) / sizeof(int);
    int element = 123235;
    int index = 0;
    // index=linearSearch(arr,size,element);
    index = binarySearch(arr, size, element);
    cout << "The element " << element << " found at " << index + 1 << " position" << endl;
    return 0;
}