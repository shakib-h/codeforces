#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, points = 0;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    for (int i = 2; i < n; i++)
    {
        int freq = count(vec.begin(), vec.end(), i);
        if (freq != 0)
        {
            vec.erase(remove(vec.begin(), vec.end(), i), vec.end());
            vec.erase(remove(vec.begin(), vec.end(), i + 1), vec.end());
            vec.erase(remove(vec.begin(), vec.end(), i - 1), vec.end());
        }
        points += (i * freq);
    }
    cout << points << endl;
    return 0;
}