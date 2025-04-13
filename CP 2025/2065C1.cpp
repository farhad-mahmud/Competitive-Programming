#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
       
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 5); // +2 is just safe buffer
           a[0]=-1e12;
         // ✅ prevent garbage comparison

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int b;
    cin >> b;

    for (int i = 1; i <= n; i++) {
        int cur = b - a[i];

        if (a[i] < a[i - 1]) {
            a[i] = cur;
            continue;
        }

        if (cur < a[i] && cur >= a[i - 1]) {
            a[i] = cur;
            continue;
        }
    }

    bool is = true;
      for (int i = 2; i <= n; i++) {
          if (a[i] < a[i - 1]) {

              is = false;
            
            }
    }

  
       if(is) {

            yes ;
       }
       else {

               no ;
       }


}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

   
          int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
