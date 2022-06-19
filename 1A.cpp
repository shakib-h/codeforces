#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double m, n, a;
    cin >> m >> n >> a;
    double w=m/a, l=n/a;
    long long stones = ceil(w)*ceil(l);
    cout << stones <<endl;
    return 0;
}