#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> beatmap(n);
        vector <int > idx ;
        for(int i=0;i<n;i++)
        {
            cin >> beatmap[i] ;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                if (beatmap[i][j] == '#') {
                    idx.push_back(j+1) ;
                }
            }
        }

        for(int i = idx.size()-1 ;i>=0;i--)
        {
            cout << idx[i] << " " ;
        }
       cout << endl;
    }

    return 0;
}
