#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n,i ;
    cin >> n ;
    int len=1 ,maxlen =1 ;
    vector <int >a(n);
    sort(a.begin(),a.end(),greater<int>());

    for( i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for( i=0;i<n-1;i++)
    {
        if (a[i+1] >= a[i]) {
                len++ ;
                maxlen= max(maxlen,len);
        }
        else {
            len = 1 ;
        }
    }
    cout << maxlen<< endl;
    return 0 ;
}
