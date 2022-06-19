#include <iostream>
using namespace std;
int main()
{
    int n, v1 = 0, v2 = 0, v3 = 0;
    cin >> n;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        v1 += x;
        v2 += y;
        v3 += z;
    }
    if (v1==0 && v2==0 && v3==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}