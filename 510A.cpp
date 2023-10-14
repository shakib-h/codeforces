#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, hash = 0, printed = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                if (j == 0 && hash == 1 && printed == 0)
                {
                    cout << "#";
                    hash = 0;
                    printed = 1;
                }
                else if (j == m - 1 && hash == 0 && printed == 0)
                {
                    cout << "#";
                    hash = 1;
                    printed = 1;
                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
        printed = 0;
    }
    return 0;
}