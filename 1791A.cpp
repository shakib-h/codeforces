#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string cf = "codeforces";
    while (t--)
    {
        char temp;
        cin >> temp;
        bool ache = false;
        for (int i = 0; i < cf.length(); i++)
        {
            if (temp == cf[i])
            {
                ache = true;
                break;
            }
        }
        if (ache)
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