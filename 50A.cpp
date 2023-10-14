#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m, prime = 1;
    cin >> n >> m;
    if (checkPrime(m))
    {
        for (int i = n + 1; i < m; i++)
        {
            if (checkPrime(i))
            {
                prime = 0;
                break;
            }
        }
    }
    else
    {
        prime = 0;
    }
    if (prime)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
