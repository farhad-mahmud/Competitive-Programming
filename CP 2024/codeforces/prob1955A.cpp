#include<bits/stdc++.h>

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)

using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
             int n ,a ,b ;
             cin >> n >> a >> b ;
             int counte = 0;
             int x = 0;
             if(n%2==0)
             {
                 x = n/2 ;
                 counte = x*b ;
             }
             else
             {
                 x = n/2 ;
                 counte = (x*b) + a ;
             }
             int ones = (n*a) ;
             if(counte > ones)
             {
                 cout << ones << endl;
             }
             else
             {
                 cout << counte << endl;
             }

    }
    return 0 ;
}
