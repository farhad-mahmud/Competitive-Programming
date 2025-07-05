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

void solve ()
{
                 
                  int n ; cin >> n ;

                  int px,py,qx,qy ; cin >> px >> py >> qx >> qy ;

                  vector<int > a(n+1) ;
                  map <int,int > mp ;
                  int sum = 0;

                  for(int i=1 ;i<=n;i++){

                         cin >> a[i] ;
                         sum += a[i] ;
                         
                  }

                  double d = dis(px , py ,qx ,qy) ;

                  int mx = *max_element(a.begin()+ 1, a.begin()+n+1) ;

                  int rest = sum - mx ;

                  cerr << d << nl; 

                  if(d == 0){

                       if(mx <= rest){
                           yes ;
                           return ;
                       }  
                       else {
                           no ;
                           return ;
                       }
                  }
              
                  if(d != 0){

                        if(sum >= d){

                             if(mx > d){

                                 double gap = mx -d ;

                                 if(rest >= gap){
                                        yes ;
                                 }
                                 else {
                                        no  ;
                                 }
    
                             }
                             else {

                                 yes ;
                             }
                        }
                        else {

                             no  ;
                        }
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
