#include <bits/stdc++.h>
// The include bits/stdc++. h is a header file that we use in our code to include all the standard libraries
using namespace std;

#define MAX 50 // max size of the array

int size, pos, a[MAX], num;

void printArray() // Function to print the array
{
    cout << "The printed elements are:" << endl;
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
    cout << "Enter the position of the element to be deleted into the array: " << endl;
    cin >> pos;
    if (invalidPositionChecker())
    {
        return;
    }
    cout << "The deletd element is " << a[pos - 1] << endl;
    for (int i = pos - 1; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    printArray();
}

void get()
{
    cout << "Enter the position of the array:";
    cin >> pos;
    cout << "The element in the" << pos + 1 << "position is: " << a[pos] << endl;
}
void set_val()
{
    cout << "Enter the position of the array :";
    cin >> pos;
    cout << "Enter the number to put in the" << pos + 1 << "position" << endl;
    cin >> num;
    a[pos] = num;
    cout << "The new array comes out to be" << endl;
    printArray();
}
// Element search not yet completed
void elementSearch()
{
    cout << "Enter the element to be searched:" << endl;
    cin >> num;
}
void max(){

}
void min(){
    
}
void append()
{
    cout << "Enter the element to be added in the array ";
    cin >> num;
    a[size] = num;
    size++;
    cout << "The new array comes out to be" << endl;
    printArray();
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
        // Menu for array operations
        cout << "********************************************" << endl;
        cout << "Press 1 to print array (Traversal of array)" << endl;
        cout << "Press 2 to insert an element in a specific position" << endl;
        cout << "Press 3 to delete an element from a specific position" << endl;
        cout << "Press 4 to search for an element in the array" << endl;
        cout << "Press 5 to get element of the given position in the array" << endl;
        cout << "Press 6 to set element in the given position in the array" << endl;
        cout << "Press 7 to append the array" << endl;
        cout << "Press 8 to find the max element of the array" << endl;
        cout << "Press 9 to find the min element of the array" << endl;
        cout << "Press 10 to exit the program" << endl;
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
        case 4:
            elementSearch(); // Elementsearch not yet completed
        case 5:
            get();
            break;
        case 6:
            set_val();
            break;
        case 7:
            append();
            break;
        case 8:
            max();//max not yet completed
            break;
        case 9:
            min();//min not yet completed
            break;
        case 10:
            return 0;
            break;
        default:
            break;
        }
    }

    return 0;
}
