#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve (int a,int b,int c)
{
             if(b>a  && b <c)
             {
                 cout << "STAIR" << endl;
             }
             else if(b>a && b > c)
             {
                 cout <<"PEAK" <<endl;
            }
            else{
                cout << "NONE" << endl;
            }
}




int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {

            int a,b,c ;
            cin >> a >> b >> c ;
            solve(a,b,c) ;


    }

    return 0;
}

