// Write  a Program for Linear Search of an element in an array.

#include <iostream>
using namespace std;
int main()
{
    int a[20], i, element, n;
    cout << "The number of elements in an array=";
    cin >> n;
    cout << "\nEnter the data elements of an array=>";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "\nEnter the data element which you want ot search in an array=\n";
    cin >> element;

    for (i = 0; i < n; i++)
    {
        if (element == a[i])
        {
            cout << "Element " << element << " found at " << i + 1 << " postion";
            return 0;
        }
    }
    cout << "Element not found";
    return 0;
}