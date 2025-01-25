#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int ones = (n/10) ;
        int tens = (n % 10);

        cout << tens+ones << endl;

    }
    return 0 ;
}
