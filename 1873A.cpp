#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string abc;
        cin >> abc;
        if (abc[0] == 'a' || abc[1] == 'b' || abc[2] == 'c')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}