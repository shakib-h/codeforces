#include <iostream>
using namespace std;
int main()
{
    int input, step = 0;
    cin >> input;
    int count = input;
    while (count--)
    {
        if (input == 0)
        {
            break;
        }
        if (input >= 5)
        {
            input -= 5;
            step++;
        }
        else if (input >= 4)
        {
            input -= 4;
            step++;
        }
        else if (input >= 3)
        {
            input -= 3;
            step++;
        }
        else if (input >= 2)
        {
            input -= 2;
            step++;
        }
        else if (input >= 1)
        {
            input -= 1;
            step++;
        }
    }
    cout << step << endl;
}