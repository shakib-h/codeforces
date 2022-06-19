#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    reverse(b.begin(), b.end());
    if (a.compare(b) == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}