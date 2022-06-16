#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string input, output;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u' || input[i]=='y' )
        {
        } else {
            output+='.';
            output+=input[i];
        }
    }
    cout << output << endl;
    return 0;
}