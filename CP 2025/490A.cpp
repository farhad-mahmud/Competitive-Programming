#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;



void solve ()
{
        

           int n ; cin >> n;

           vector<int > a ;
           vector<int > b ;
           vector<int > c ;

           int t = 0 ;

           for(int i=0;i<n;i++){

                    cin >> t ;

                    if(t== 1){

                        a.push_back(i+1) ;
                    }
                    else if(t==2){

                        b.push_back(i+1) ;
                    }
                    else{

                        c.push_back(i+1) ;
                    }
           }


           int team = min(a.size(),min(b.size(),c.size())) ;

           
          
            cout << team << endl; 


           for(int i=0;i<team ;i++){


                   cout << a[i] << " " <<  b[i] << " " <<  c[i] << endl;
           }

     


}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
