#include<bits/stdc++.h>

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)
#define ll             long long int
using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
              int x, y ;
              cin >> x >> y ;
              if(x>y)
              {
                  cout << y << " " <<  x  ;
              }
              else
              {
                  cout << x<< " " << y ;

              }

           cout << endl;
    }
    return 0 ;
}

