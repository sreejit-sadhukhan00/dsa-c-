#include <iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the array element: \n";
        cin >> arr[i];
    }
    cout << "the unsorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "\n the sorted array is:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}