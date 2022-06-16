#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string input, output;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u' )
        {
        } else {
            cout <<"."<<input[i];
        }
    }
    cout << output;
}