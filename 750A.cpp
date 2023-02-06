#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t = 0, i = 1, k = 0;
    cin >> a >> b;
    t=240-b;
    while (t > 4 && i <= a)
    {
        i++;
        k++;
        t -= i * 5;
    }
    cout << k << endl;
    return 0;
}