#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, s = 0;
        cin >> n >> m;
        string vika = "vika";
        char input[n][m];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (input[i][j] == vika[s])
                {
                    s++;
                    break;
                }
            }
        }
        if (s == 4)
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