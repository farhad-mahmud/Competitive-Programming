#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
int  solve (int n )
{
       int sum = 1 ;
       vector<int > v ;
        int count =1 ;
        int  final_sum = 1 ;
        for(int i=2;i<=n;i++)
        {

                if(final_sum < n)
                {
                      sum += i ;
                      final_sum += sum ;
                      if(final_sum >n)
                      {
                        break ;
                      }
                      else
                      {
                        count++ ;
                      }

                }

        }

        return count ;

}




int main() {
    FAST_IO;


            int n ;
            cin >> n;
            solve(n) ;
            cout << solve(n) << endl;
    return 0;
}
