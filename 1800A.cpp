#include <iostream>
#include <algorithm> // for transform
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string cat;
        cin >> cat;

        // convert the string to lowercase
        transform(cat.begin(), cat.end(), cat.begin(), ::tolower);

        // check if the string contains only 'm', 'e', 'o', and 'w'
        for (int i = 0; i < n; i++)
        {
            if (cat[i] != 'm' && cat[i] != 'e' && cat[i] != 'o' && cat[i] != 'w')
            {
                cout << "NO" << endl;
                goto end; // use a goto statement to skip the rest of the loop
            }
        }

        // check the conditions for the meow sound
        for (int i = 0; i < n; i++)
        {
            if (cat[i] == 'm')
            {
                if (i + 1 >= n || cat[i + 1] != 'e')
                {
                    cout << "NO" << endl;
                    goto end;
                }
                i++; // skip the 'e'
            }
            else if (cat[i] == 'e')
            {
                if (i + 1 >= n || cat[i + 1] != 'o')
                {
                    cout << "NO" << endl;
                    goto end;
                }
                i++; // skip the 'o'
            }
            else if (cat[i] == 'w')
            {
                continue;
            }
            else // cat[i] == 'o'
            {
                if (i + 1 >= n || cat[i + 1] != 'w')
                {
                    cout << "NO" << endl;
                    goto end;
                }
                i++; // skip the 'w'
            }
        }

        cout << "YES" << endl;

        end:
        continue; // use a continue statement to skip the rest of the loop
    }

    return 0;
}
