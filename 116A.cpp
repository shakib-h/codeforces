#include <iostream>
using namespace std;
int main()
{
    int n, p = 0, max = 0, a, b;
    cin >> n;
    while (n--)
    {
        if (p > max)
        {
            max = p;
        }
        cin >> a >> b;
        p += b;
        p -= a;
    }
    cout << max << endl;
    return 0;
}