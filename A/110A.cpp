#include <iostream>
using namespace std;
int main () {
    long long onk;
    int lucky=0;
    cin>>onk;
    while (onk!=0) {
        if ((onk%10==4) || (onk%10==7))
        {
            lucky++;
        }
        onk/=10;
    }
    if (lucky==4 || lucky==7)
    {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}