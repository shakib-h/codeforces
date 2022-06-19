#include <iostream>
using namespace std;
int main()
{
    int n, h, w = 0;
    cin >> n >> h;
    while (n--)
    {
        int x;
        cin >> x;
        if (x > h)
        {
            w += 2;
        }
        else
        {
            w += 1;
        }
    }
    cout<<w<<endl;
    return 0;
}