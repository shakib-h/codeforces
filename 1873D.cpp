#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        string bw;
        cin >> n >> k >> bw;
        for (int i = 0; i < n; i++)
        {
            if (bw[i] == 'B')
            {
                count++;
                i += (k - 1);
            }
        }
        cout << count << endl;
    }

    return 0;
}