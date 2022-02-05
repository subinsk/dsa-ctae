#include <iostream>
using namespace std;

int main()
{
    int element, mid, left, right, n;

    cout << "Enter the size of array:";
    cin >> n;

    int arr[n];
    left = 0;
    right = n - 1;

    cout << "\nEnter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter the element to be found:";
    cin >> element;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == element)
        {
            cout << "\nElement " << element << " found at position " << mid + 1;
            return 0;
        }

        if (arr[mid] < element)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << "\nElement not found";

    return 0;
}