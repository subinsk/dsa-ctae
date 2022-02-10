// Write a code to implement insertion and deletion of data element in an array.

#include <iostream>
using namespace std;
int main()
{
    int n, b, d = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int a[100];
    cout << "\nEnter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    do
    {
        cout << "\nEnter your choice:"
             << endl
             << "Choose 1 for Insertion" << endl
             << "Choose 2 for Deletion " << endl
             << "Choose 3 to Exit " << endl;
        cin >> b;
        switch (b)
        {
        case 1:
            int c;
            cout << "\nEnter the new number to be inserted:";
            cin >> c;
            a[n] = c;
            n++;
            cout << "\nArray after insertion: ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
            break;

        case (2):
            int i;
            cout << "\nEnter the number to be deleted: ";
            cin >> c;

            for (i = 0; i < n; i++)
            {
                if (c == a[i])
                {
                    for (int j = i; j < n; j++)
                    {
                        a[j] = a[j + 1];
                    }
                    n--;
                    break;
                }
            }
            if (c == i)
            {
                cout << "\nElement not found";
            }

            cout << "\nArray after deletion: ";
            for (i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            break;
            cout << "\n";
        default:
            cout << "\nInvalid Choice" << endl;
        }
    } while (b != 3);
    return 0;
}