
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
           int n ;
           cin>> n;
           int a[n] ;
           int b[n];
           for(int i=0;i<n;i++)
           {
               cin >> a[i] >> b[i] ;

           }
           int maximum = 0;



         for (int i = 0; i < n; ++i) {
            if (a[i] <= 10) {
                maximum = max(maximum, b[i]);
            }
        }


           for(int i=0;i<n;i++)
           {
                 if(a[i]<=10 && b[i]==maximum)
                 {
                     cout << i+1 << endl;
                 }
           }
    }

    return 0 ;
}
