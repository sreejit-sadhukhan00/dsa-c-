#include <iostream>
using namespace std;
void allduplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << "  this is a duplica number" << endl;
            }
        }
    }
}
void alternateswap()




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
    allduplicate(num,size);
    return 0;
}


