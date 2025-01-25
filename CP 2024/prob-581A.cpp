#include<bits/stdc++.h>

using namespace std ;
int main()
{
    int a,b ;
    cin>> a >> b ;
    int df_socks, sm_socks ,mx ,differ ;
    df_socks = min(a,b) ;
     mx = max(a,b) ;
    differ = mx - df_socks ;
    sm_socks = (differ/2 ) ;

    cout << df_socks << " " <<  sm_socks << endl;
    return 0 ;


}
