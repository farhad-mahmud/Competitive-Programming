#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{ 

              int n ; cin >> n ;
              
              vector <int > arr(n) ;

              for(int i=0;i<n;i++){

                       cin>> arr[i] ;

              }

           vector<int > v ;

           
    int first_max = 0, second_max = 0 ;

     for (int num : arr) {
        if (num >= first_max) {
            second_max = first_max; 
            first_max = num;
        } else if (num > second_max && num <=first_max) {
            second_max = num;
        }
    }
             
              int f = 0 ;
         
          int minn = *min_element(arr.begin(),arr.end()) ;

          //cout << first_max << endl ;
          //cout << second_max << endl; 

            for(int i=0;i<n;i++){

                if(arr[i] == minn && arr[i] == first_max){

                        v.push_back(f) ;
                }
  
                else if(arr[i]==first_max){

                       f = (arr[i] - second_max) ;
                      v.push_back(f) ;
                }  
                else {
                         f = (arr[i] - first_max) ;

                         v.push_back(f) ;

                }

                      
            }
                   
                for(auto i : v){

                      cout << i <<" " ;
                }  

        cout << endl ;

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
