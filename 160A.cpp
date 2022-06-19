#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, total = 0, sum = 0, greedy = 0;
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        total += coins[i];
    }
    sort(coins, coins + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (sum > total / 2)
        {
            break;
        }
        sum += coins[i];
        greedy++;
    }
    cout << greedy << endl;
    return 0;
}