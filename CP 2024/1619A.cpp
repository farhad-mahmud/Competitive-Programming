#include<bits/stdc++.h>
#include<string>
#include<vector>
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
            string s ;

            cin >> s;

            vector <int > cnt(256,0) ;

            bool flag = true ;


           for (char c : s) {
            cnt[c]++; // Increment the frequency of the current character
        }

          for(int i=0;i<s.length();i++)
          {
              cout << cnt[i] << endl;
          }


           for(int i=0;i<256;i++)
           {
               if(cnt[i]%2 != 0)
               {
                   flag = false ;
               }
           }

           if(flag)
           {
               cout << "YES" <<endl;
           }
           else{
            cout <<"NO" <<endl;
            }
    }
    return 0 ;
}

