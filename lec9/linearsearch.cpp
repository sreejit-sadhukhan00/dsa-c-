#include <iostream>
#include <math.h>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;

    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    int num[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter a num:" << endl;
        cin >> num[i];
    }

        cout << "enter the key value" << endl;
        cin >> n;
   
    bool found = search(num, size, n);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
    return 0;
}