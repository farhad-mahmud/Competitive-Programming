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

        // Step 1: Calculate the degree of each vertex
        vector<int> degree(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][j] == '1') {
                    degree[i]++;
                }
            }
        }

        // Step 2: Store degrees with corresponding vertex indices
        vector<pair<int, int>> vertex_degree;
        for (int i = 0; i < n; i++) {
            vertex_degree.push_back({degree[i], i + 1}); // {degree, vertex_index}
        }

        // Step 3: Sort by descending degree, tie-breaking by descending vertex index
        sort(vertex_degree.begin(), vertex_degree.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.first == b.first) {
                return a.second > b.second; // Tie-breaker: larger vertex index first
            }
            return a.first > b.first; // Higher degree first
        });

        // Step 4: Create permutation vector
        vector<int> permutation(n);
        for (int i = 0; i < n; i++) {
            permutation[i] = vertex_degree[i].second;
        }

        // Step 5: Print the result
        for (int i = 0; i < n; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
