#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long Magical_Subarrays = 0;
    int count = 1;


    for (int i = 1; i < n; ++i) {
        if (arr[i] == arr[i - 1]) {

            count++;
        } else {

            Magical_Subarrays += (long long)count * (count + 1) / 2;
            count = 1;
        }
    }


    Magical_Subarrays += (long long)count * (count + 1) / 2;


    cout << Magical_Subarrays << endl;

    return 0;
}

