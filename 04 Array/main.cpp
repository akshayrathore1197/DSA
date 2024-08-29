#include <iostream>
using namespace std;

// Global array declaration
int brr[6];
// When you declare an array globally, all elements are initialized to zero by default.
// The maximum size of a global array can be up to 10^7 elements due to larger memory availability.

int main()
{
    // Printing the global array
    // Since the array is global, each element is zero
    puts("Global");
    for (auto i : brr)
        cout << i << " ";

    cout << endl
         << endl;

    // Local array declaration
    // When you declare an array inside the main function, elements are not automatically initialized.
    // These elements hold random garbage values initially.
    // The maximum size of a local array can be up to 10^6 elements due to the stack size limit.
    puts("Inside the main");
    int arr[6];
    for (auto i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
