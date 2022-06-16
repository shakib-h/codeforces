#include <iostream>
using namespace std;
int main () {
    string players;
    cin>>players;
    int neymar=1;
    for (int i = 1; i < players.length(); i++)
    {
        if (neymar==7)
        {
            neymar++;
            break;
        }
        if (players[i]==players[i-1])
        {
            neymar++;
        } else {
            neymar=1;
        }
        
    }
    if (neymar>=7)
    {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    
}