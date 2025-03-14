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
                int n ;
                cin >> n ;
                int counte =0 ;

                  if(n==1)
                  {
                      counte = 0 ;
                  }
                while(n>1)
                {

                  if(n%6==0)
                  {
                      n = n/ 6 ;
                      counte++;
                  }
                  else
                  {
                      n = n*2 ;
                      if(n%6!=0)
                      {
                        counte = -1 ;
                      break ;
                      }
                      counte ++ ;
                  }

                }


                 cout << counte << endl;
    }
}

