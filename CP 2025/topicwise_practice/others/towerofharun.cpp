#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                        int n;
                       cin >> n;

                 vector<int> m(n);

                for (int i = 0; i < n; i++) {
                    cin >> m[i];
                    }
 
                  multiset<int> towers;

             for (int i = 0; i < n; i++) {

              int disk = m[i];
  
              auto it = towers.lower_bound(disk);  // finds >= of disk ;  it != end ;

                                                   // if not it = end() ;
                                                  // code goes to towers.insert(disk);

              if (it != towers.end()) {      // if theres bigger disk , we erase the bigger disk
                                             // from the tower , and we insert
                                             // current smaller disk in the place of it 

                    towers.erase(it);  
                      

              }

               towers.insert(disk); 

           }

                cout << towers.size() << endl;
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
