#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0, temp=0;
    string input;
    cin>>input;
    sum+=min(input[0]-'a','z'-input[0]+1);
    for (int i = 1; i < input.length(); i++)
    {
        temp=abs(input[i]-input[i-1]);
        if(temp>13){
            sum+=(26-temp);
        } else {
            sum+=temp;
        }
    }
    cout<<sum<<endl;
    return 0;
}