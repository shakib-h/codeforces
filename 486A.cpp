#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = (n % 2 == 0) ? n / 2 : -((n / 2) + 1);
    cout << sum << endl;
    return 0;
}