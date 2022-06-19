#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    bool d = true;
    cin >> n;
    for (int i = n + 1; d; i++)
    {
        string year = to_string(i);
        string year2 = year;
        sort(year.begin(), year.end());
        for (int j = 0; j < year.length(); j++)
        {
            if (year[j] == year[j + 1])
            {
                d = true;
                break;
            }
            else
            {
                d = false;
            }
        }
        n=stoi(year2);
    }
    cout<<n<<endl;
}