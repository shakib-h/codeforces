#include <iostream>
using namespace std;
int main()
{
    string hq;
    int output = 0;
    cin >> hq;
    for (int i = 0; i < hq.length(); i++)
    {
        if (hq[i] == 'H' || hq[i] == 'Q' || hq[i] == '9')
        {
            output++;
        }
    }
    if (output > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}