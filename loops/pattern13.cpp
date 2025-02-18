#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "give the number rows" << endl;
    cin >> n;
    int i = 1;
    char start = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << start << "  ";
            start = start + 1;

            j++;
        }
        cout << endl;
        i++;
    }
}