#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int h = 0, e = 0, l = 0, ll = 0, o = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h')
        {

            h++;
        }
        if (s[i] == 'e' && h > 0)
        {
            e++;
        }
        if (s[i] == 'l' && e > 0)
        {
            l++;
        }
        if (s[i] == 'l' && l > 0)
        {
            ll++;
        }
        if (s[i] == 'o' && l > 0)
        {
            o++;
        }
    }
    if (h > 0 && e > 0 && l > 0 && ll > 0 && o > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
