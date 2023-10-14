#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int salvic[n], product = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> salvic[i];
        }
        sort(salvic, salvic + n);
        salvic[0]++;
        for (int i = 0; i < n; i++)
        {
            product *= salvic[i];
        }
        cout << product << endl;
    }
    return 0;
}