#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{
           int n ,a ,b  ; cin >> n >> a >> b ;
             
           int cnt = 0 ;
           int first_pos = (n- a);
          for(int i = b ;i>0;i++){
                    
                       cnt++;
          }

        cout << cnt +1 << endl;

          
   
}




int main() {
    FAST_IO;


            solve() ;


    return 0;
}
