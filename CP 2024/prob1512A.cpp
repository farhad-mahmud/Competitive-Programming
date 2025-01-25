#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        int spy = 0;
        for (int i = 0; i < n; i++) {
            if ((i == 0 && arr[i] != arr[i + 1] && arr[i] != arr[i + 2]) ||
                (i == n - 1 && arr[i] != arr[i - 1] && arr[i] != arr[i - 2]) ||
                (i > 0 && i < n - 1 && arr[i] != arr[i - 1] && arr[i] != arr[i + 1])) {
                spy = i + 1;
                break;
            }
        }

        cout << spy << endl;
    }

    return 0;
}
