#include<bits/stdc++.h>
using namespace std;

void farhadtation(int n) {
    if (n % 2== 1) {
        cout << -1 << endl;
        return;
    }

    vector<int> p(n+1);
    for (int i = 1; i <= n; i++) {
        p[i] = i;
    }

    for (int i = 1; i <n; i += 2) {

        swap(p[i], p[i + 1]);
    }


    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    farhadtation(n);
    return 0;
}
