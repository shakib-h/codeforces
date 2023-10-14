#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, d;
        cin>>n>>d;
        string digits, combined, sd=to_string(d);
        cin>>digits;
        combined = sd+digits;
        for (int i = 0; i < combined.length()-1; i++)
        {
            if (combined[i]>combined[i+1])
            {
                break;
            } else {
                swap(combined[i], combined[i+1]);
            }
        }
        cout<<combined<<endl;
    }
    return 0;
}