#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, target;
        cin >> n >> target;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        // linear search
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                idx = i;
                break;
            }
        }

        if (idx != -1)
            cout << "Found at index " << idx << "\n";
        else
            cout << "Not found\n";
    }

    return 0;
}
