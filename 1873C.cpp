#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int sum=0, half=0;
        string borgo[10];
        for (int i = 0; i < 10; i++)
        {
            cin>>borgo[i];
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = i; j < 10-i; j++)
            {
                if (borgo[i][j]=='X')
                {
                    sum+=i+1;
                    borgo[i][j]='.';
                }
                if (i>4)
                {
                    sum-=half;
                    half++;
                }
                
            }
        }
        
        cout<<sum<<endl;
    }
    return 0;
}