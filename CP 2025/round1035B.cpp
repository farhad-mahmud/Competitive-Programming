#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

double dis(int x1, int y1, int x2, int y2) {

     int dx = x1 - x2;
    int dy = y1 - y2;
    return sqrt((double)(dx * dx + dy * dy));

}

bool can_reach(vector<int >& a , double d, int n){


                 double t = 0 ;

                 for(int i=1 ;i<=n ;i++){

                      t+= a[i] ;
                 }

                 if(d > t ){
                     return false ;
                 }
                 

               double dif = (t - d) ;

               if((int)dif % 2 !=0){

                      return false ;
               }

               return true ;

}
void solve ()
{
                 
                  int n ; cin >> n ;

                  int px,py,qx,qy ; cin >> px >> py >> qx >> qy ;

                  vector<int > a(n+1) ;
                  map <int,int > mp ;

                  for(int i=1 ;i<=n;i++){

                         cin >> a[i] ;
                         mp[a[i]]++;
                  }

                  double d = dis(px , py ,qx ,qy) ;
                  bool flag = true ;

                  //cout << d << nl; 

               

                   if(can_reach(a,d,n)) {

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
