#include<iostream>
#include<vector>

using namespace std;

void round_num() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int mod, x = 1, count = 0;
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        while (arr[i] > 0) {
            x *= 10;
            mod = arr[i] % x;
            if (mod != 0) {
                arr[i] -= mod;
                count++;
                result.push_back(mod);
            }
        }
        result.push_back(count);
        for (int i = result.size()-1; i >= 0; i--) {
            cout << result[i] << endl;
        }
        result.clear();
        x = 1;
        count = 0;
    }
}

int main() {
    round_num();
    return 0;
}
