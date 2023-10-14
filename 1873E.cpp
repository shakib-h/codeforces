#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, total;
        cin >> n >> c;
        int columns[n];
        for (int i = 0; i < n; i++)
        {
            cin >> columns[i];
        }
        int max = *max_element(columns, columns + n);
        int h = max;
        for (int i = 0; i < n; i++)
        {
            total += max - columns[i];
        }
        if (total < c)
        {
            h = h + ((c - total) / n);
        }
        else
        {
            while (1)
            {
                int total2 = 0;
                for (int i = 0; i < n; i++)
                {
                    total2 += max - columns[i];
                }
                max--;
                if (total2<=c)
                {
                    break;
                }
            }
            h=max;
        }
        cout << h << endl;
    }

    return 0;
}