#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        bool naai = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n >= 3)
        {
            sort(arr, arr + n);
            for (int i = 2; i < n; i++)
            {
                if (arr[i - 2] == arr[i - 1] && arr[i-1] == arr[i])
                {
                    cout << arr[i] << endl;
                    naai = false;
                    break;
                }
            }
            if (naai)
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}