#include <bits/stdc++.h>

using namespace std;

#define int  long long

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
                    vector<int > a(5);

                    int sum = 0 ;
                    int avg = 0 ;


                    for(int i=0;i<5;i++){

                            cin >> a[i] ;

                            sum += a[i] ;
                    }
           

                    avg = ceil(sum / 5) ;


                    sort(a.begin() , a.end()) ;

                   //  cout << sum << endl; 

                     if(sum >=35){

                           cout << 0 << endl;
                           return ;
                     }

                     int need = 35 - sum ;

                    // cout << need << endl; 

                     int brb = 0;

                     for(int i=0;i<5 && sum < 35 ;i++){                            

                                    sum += 10 - a[i];
                                    brb += 100;
                            
                     }

                     cout << brb << endl; 

}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
