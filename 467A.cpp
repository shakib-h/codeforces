#include <iostream>
using namespace std;
int main () {
    int n, rooms=0;
    cin>>n;
    while (n--)
    {
        int p, q;
        cin>>p>>q;
        if (p<=q-2)
        {
            rooms++;
        }
        
    }
    cout<<rooms<<endl;
}