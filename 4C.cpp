#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> search;
    int n;
    string input;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        if (search[input]==0)
        {
            cout<<"OK"<<endl;
            search[input]=1;
        } else {
            cout<<input<<search[input]<<endl;
            search[input]++;
        }
    }
    
    return 0;
}