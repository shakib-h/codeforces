#include <iostream>
using namespace std;
int main()
{
    int n, t;
    string children;
    cin >> children >> t >> children;
    while (t--)
    {
        for (int i = 0; i < children.length(); i++)
        {
            //cout<<i<<children[i]<<children[i+1]<<endl;
            if ((children[i] == 'B') && (children[i + 1] == 'G'))
            {
                swap(children[i], children[i + 1]);
                i++;
            }
        }
    }
    cout << children << endl;
}