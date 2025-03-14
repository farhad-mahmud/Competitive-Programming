#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> give(n);
    vector<int> got(n);
    for (int i = 0; i < n; i++)
        {cin >> give[i];}
    for (int i = 0; i < n; i++)
     {got[give[i] - 1] = i + 1;}
    for (int i = 0; i < n; i++)
    {cout << got[i] << " ";}
    return 0;
}
