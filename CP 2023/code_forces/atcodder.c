#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> p(n);
    int max_ability = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        max_ability = max(max_ability, p[i]);
    }

    ans = max_ability - p[0];
    cout << max(ans, 0) << endl;

    return 0;
}
