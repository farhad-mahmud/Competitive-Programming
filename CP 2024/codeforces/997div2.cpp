#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> graph(n);
        for (int i = 0; i < n; i++) {
            cin >> graph[i];
        }


        vector<int> degree(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][j] == '1') {
                    degree[i]++;
                }
            }
        }


        vector<pair<int, int>> vertex_degree;
        for (int i = 0; i < n; i++) {
            vertex_degree.push_back({degree[i], i + 1});
        }


      sort(vertex_degree.begin(), vertex_degree.end(), [](pair<int, int> a, pair<int, int> b) {
      if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
          });


        vector<int> permutation(n);
        for (int i = 0; i < n; i++) {
            permutation[i] = vertex_degree[i].second;
        }



        for (int i = 0; i < n; i++) {
            cout << permutation[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
