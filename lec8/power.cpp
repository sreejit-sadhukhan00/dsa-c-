#include <iostream>
using namespace std;
int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int a, b;
    cout << "enter the number a:" << endl;
    cin >> a;
    cout << "enter the number b:" << endl;
    cin >> b;
    int ans = power(a, b);
    cout << "the answer is :" << ans << endl;
    // cout<<power(a,b)<<endl;
    return 0;
}