#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> final_puzzle;
    int puzzle[m];

    for (int i = 0; i < m; i++)
    {
        cin >> puzzle[i];
    }

    sort(puzzle, puzzle + m);


    for (int i = 0; i < n; i++)
    {
        final_puzzle.push_back(puzzle[i]);
    }




     int MaxElement = *max_element(final_puzzle.begin(),final_puzzle.end());
     int MinElement = *min_element (final_puzzle.begin(),final_puzzle.end());
     cout << MaxElement-MinElement << endl;

    return 0;
}
