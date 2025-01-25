#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int arr[n] ;
        int sum1=0 ,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i] ;
        }

        for(int i=0;i<n;i++)
        {
           if(arr[i] %2 ==0)
           {
               sum1 += arr[i] ;
          }
          else if(arr[i] %2 ==1)
          {
              sum2 += arr[i] ;
          }
        }
        if(sum1 %2 ==0 && sum2 %2==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0 ;
}
