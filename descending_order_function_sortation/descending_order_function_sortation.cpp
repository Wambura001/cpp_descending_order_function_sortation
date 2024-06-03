// descending_order_function_sortation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];

    // Input array elements from the user
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display unsorted array elements 
    cout << "\n Unsorted array elements: \n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort array elements in descending order
    sort(arr, arr + n, greater <int>());

    // Display sorted array elements
    cout << "\n Sorted array elements in descending order: \n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // free dynamically allocated memory 
    delete[] arr;

    return 0;
         
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
