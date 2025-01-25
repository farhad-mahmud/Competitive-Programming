#include<bits/stdc++.h>
#include<cmath>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while ( t --)
    {
        long long int n ;
        cin >> n ;
        long long int sum =0 ;
        long long int arr[n];
        for (int i=0;i<n;i++)
        {
             cin >> arr[i] ;
               sum += arr[i] ;
        }

        long long int root = sqrt(sum) ;
      if ( root * root ==  sum)
      {
          cout << "YES" << endl ;
      }
      else
      {
          cout <<"NO" << endl;
      }

    }
    return 0 ;
}
