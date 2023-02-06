#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, arr[100];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if ((arr[i - 1] != arr[i]) && (arr[i] == arr[i + 1]))
            {
                cout << i << endl;
                break;
            }
            else if ((arr[i + 1] != arr[i]) && (arr[i - 1] == arr[i]))
            {
                cout << i + 2 << endl;
                break;
            }
            else if (n == 3)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}