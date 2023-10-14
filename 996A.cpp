// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, notes = 0;
//     cin >> n;

//     notes += n / 100;
//     n %= 100;

//     notes += n / 20;
//     n %= 20;

//     notes += n / 10;
//     n %= 10;

//     notes += n / 5;
//     n %= 5;

//     notes += n;
//     cout << notes << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c, n;
//         cin >> a >> b >> c >> n;
//         if ((a + b + c + n) % 3 == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        while (n != 0)
        {
            if (n<0)
            {
                break;
            }
            if (a==b && b==c)
            {
                break;
            }
            if (a < b || a < c)
            {
                a++;
                n--;
            }
            if (b < c || b < a)
            {
                b++;
                n--;
            }
            if (c < a || c < b)
            {
                c++;
                n--;
            }
        }
        if ((a == b && b == c) && (n == 0 || n % 3 == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}