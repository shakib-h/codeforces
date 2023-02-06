#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, score;
    cin >> n;
    int min = 0, max = 0, count = 0;
    while (n--)
    {
        cin >> score;
        if (score < min)
        {
            min = score;
            count++;
        }
        if (score > max)
        {
            max = score;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}