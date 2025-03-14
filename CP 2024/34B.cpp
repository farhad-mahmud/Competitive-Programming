#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , m ;
    cin >> n >> m ;
     int tv[n] ;
     int sum= 0 ;
    for(int i=0;i<n;i++)
    {
        cin>> tv[i] ;
    }
     sort(tv ,tv+n) ;
    for(int i=0;i<m;i++)
    {
    if(tv[i]<=0)
    {
        sum = sum + tv[i] ;
    }
    }


    cout << abs(sum) << endl;
    return 0 ;
}
