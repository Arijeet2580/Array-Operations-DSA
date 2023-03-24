#include <bits/stdc++.h>
// The include bits/stdc++. h is a header file that we use in our code to include all the standard libraries
using namespace std;

#define MAX 50 // max size of the array

int size, pos, a[MAX], num;

void printArray() // Function to print the array
{
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}

bool overflow() // Function for overflow condition
{
    if (size > MAX)
    {
        return true;
    }
    return false;
}
bool underflow()
{ // Function for underflow condition
    if (size <= 0)
    {
        return true;
    }
    return false;
}

bool invalidPositionChecker()
{
    if (pos <= 0 || pos > size + 1)
    {
        cout << "Invalid position." << endl;
        return true;
    }
    return false;
}

void insertElement() // Function to insert the element in a specific position
{
    cout << "Enter the position of the element to be inserted into the array: " << endl;
    cin >> pos;
    if (invalidPositionChecker())
    {
        return;
    }
    cout << "Enter the number to be inserted: " << endl;
    cin >> num;
    for (int i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;
    cout << "The new array is:" << endl;
    printArray();
}

void deleteElement() // Function to delete the element in a specific position
{
    cout << "Thge deletd element is " << a[pos - 1] << endl;
    cout << "Enter the position of the element to be inserted into the array: " << endl;
    cin >> pos;
    if (invalidPositionChecker())
    {
        return;
    }
    for (int i = pos - 1; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
}

int main()
{
    int i, ch = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (overflow())
    {
        cout << "Array reached the overflow.\nNo more element can be taken." << endl;
        return 0;
    }
    if (underflow())
    {
        cout << "There is no element in the array left" << endl;
    }

    cout << "Enter elements of the array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    while (1)
    {
        cout << "********************************************" << endl;
        cout << "Press 1 to print array (Traversal of array)" << endl;
        cout << "Press 2 to insert an element in a specific position" << endl;
        cout << "Press 3 to delete an element from a specific position" << endl;
        cout << "Press 4 to search for an element in the array" << endl;
        cout << "Press 5 to exit the program" << endl;
        cout << "********************************************" << endl;
        cout << "Enter the choice: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            printArray();
            break;
        case 2:
            insertElement();
            break;
        case 3:
            deleteElement();
            break;
        case 5:
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}
