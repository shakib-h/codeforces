#include <iostream>
using namespace std;
int main()
{
    int number, operation;
    cin >> number >> operation;
    while (operation--)
    {
        if (number%10==0)
        {
            number/=10;
        } else {
            number-=1;
        }
    }
    cout<<number<<endl;
    return 0;
}