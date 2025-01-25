#include<bits/stdc++.h>

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)
#define testcase      cout << "Case " << tc++ << ": "
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)
using namespace std;
int main()
{
    long long int t ;
    cin >> t ;
    while(t--)
    {
             long long int a,b,c,n ;
             cin >> a >> b >> c >> n ;
             long long int maximum = max(a,max(b,c));

             long long int a_needs =0,b_needs =0,c_needs = 0;

             if(a!=maximum)
             {
                 a_needs = maximum - a ;
             }
              if (b!= maximum)
             {
                  b_needs = maximum - b;
             }
             if (c!=maximum)
             {
                  c_needs = maximum - c ;
             }


             long long int total_needs = a_needs + b_needs + c_needs ;

             long long int left = 0 ;

             left = n- total_needs ;


              if (left==0)
              {
                  cout << "YES" << endl;
               }
             else if (left>0 && left %3 ==0){
                 cout <<"YES" << endl;
             }
             else
             {
                 cout << "NO" <<endl;
             }



    }

    return 0 ;
}

