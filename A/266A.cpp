#include <iostream>
using namespace std;
int main()
{
    int n, remove = 0;
    string stones;
    cin >> n >> stones;
    for (int i = 1; i < n; i++)
    {
        if (stones[i] == stones[i - 1])
        {
            remove++;
        }
    }
    cout << remove << endl;
    return 0;
}