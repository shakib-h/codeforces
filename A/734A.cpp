#include <iostream>
using namespace std;
int main()
{
    int n;
    string daba;
    cin >> n >> daba;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (daba[i] == 'A')
        {
            a++;
        }
        else if (daba[i] == 'D')
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}