#include <iostream>
using namespace std;
int main()
{
    long long n, k, mid, nice;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        mid = n / 2;
    }
    else
    {
        mid = (n / 2) + 1;
    }
    if (k <= mid)
    {
        nice = (k * 2) - 1;
    }
    else
    {
        nice = (k - mid) * 2;
    }
    cout << nice << endl;
    return 0;
}