#include<bits/stdc++.h>

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)
#define ll             long long int

using namespace std;

int main()
{
    int n ,k ;
    cin >> n >> k ;
    int arr[n] ;
    int c ;
    vector <pair <int ,int >> fence ;
    int temp = 0 ;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }

    for(int i=0; i <= n-k; i++)
    {
        c = 0;
        for(int j=i; j < i+k; j++)
        {
            c += arr[j];
        }
        fence.push_back({c, i});
    }

    sort(fence.begin(), fence.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    cout << (fence[0].second)+1 << endl;

    return 0 ;
}
