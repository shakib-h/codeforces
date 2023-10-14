#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int logs[n], l = 1, m = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> logs[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (logs[i - 1] > logs[i])
        {
            l = 1;
        }
        else
        {
            l++;
            m=max(m,l);
        }
    }
    cout << m << endl;
    return 0;
}