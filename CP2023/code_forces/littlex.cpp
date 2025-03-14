#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    cin >>p;
    vector<int>levelX(p);
    for(int i=0 ;i<p; i++)
    {
        cin >>levelX[i];
    }
    sort(levelX.begin(),levelX.end());
    int q;
    cin >> q;
    vector <int >levelY(q);
    for(int i=0;i<q;i++)
    {
        cin >>levelY[i];
    }
    sort(levelY.begin(),levelY.end());
    vector<int >allLevels;
    merge(levelX.begin(),levelX.end(),levelY.begin(),levelY.end(),back_inserter(allLevels));
    sort(allLevels.begin(),allLevels.end());
    allLevels.erase(unique(allLevels.begin(),allLevels.end()),allLevels.end()); // erases the duplicate elements from the allLevel vector
    int allLevelSize = static_cast<int>(allLevels.size());
    if(allLevelSize == n)
    {
        cout << "I become the guy." << endl;

    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;

}
