#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int vote;
        cin>>vote;
        if (vote==1)
        {
            cout <<"HARD"<<endl;
            return 0;
        }
    }
    cout <<"EASY"<<endl;
    return 0;
}