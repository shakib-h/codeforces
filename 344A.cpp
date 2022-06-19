#include <iostream>
using namespace std;
int main()
{
    int n, mg = 0, temp = 0;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x != temp)
        {
            mg++;
        }
        temp=x;
    }
    cout << mg << endl;
    return 0;
}