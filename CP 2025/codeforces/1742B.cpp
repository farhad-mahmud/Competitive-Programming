#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool solve(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return false;
        }
    }
    return true;
}

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


          if(solve(arr))
          {
              cout << "YES" << endl;
          }
          else
          {
              cout << "NO" << endl;
          }

    }

    return 0;
}

