#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        

                 int n , m ; cin >> n >> m ;

                     
                 vector<pair <int ,int >> p ;

                 vector<vector<char>> s(n, vector<char>(m));


                 for(int i=0;i<n;i++){

                     for(int j=0;j<m;j++){

                        cin >> s[i][j] ;
                    }

                 }

                            


             
                 int cnt = 0 ;

                 for(int i=0;i<n;i++){

                     for(int j=0;j<m;j++){

                               
                                   if(s[i][j] == '#'){


                                     p.push_back({i+1,j+1}) ;
                               


                                   
                                          
                                          
                                 }
                           

                                 
                     }
                 }

                  
            
                              int size = p.size()/2  ;
                  

                
        
                               
                                 if(p.size() == 1){
                              
                                cout << p[0].first << " "  << p[0].second << endl;
                                 }

                                 else {

                               cout << p[size].first << " "  << p[size].second << endl;

                                 }
                   



      
                 
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
