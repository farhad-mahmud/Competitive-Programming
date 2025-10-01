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
         vector <int > v(n) ;
         bool flag = true;
        long long int product = 1;
        for(int i=0;i<n;i++)
        {
             cin>> v[i] ;
        }
         int mine = *min_element(v.begin(), v.end());

         for(int i=1;i<n;i++)
         {
             if(v[i] != v[0])
             {
                 flag = false ;
                 break ;
             }

         }

         if (flag)  // true
         {


         for(int i=0;i<n;i++)
         {
            if(v[i]==mine)
            {
                v[i] = v[i] +1 ;
                break ;
            }
         }
         }
         else
         {
              for(int i=0;i<n;i++)
              {
              if(v[i]==mine)
            {
                v[i] = v[i] +1 ;
                break ;
            }
              }


         }

             for(int i=0;i<n;i++)
      {
              product *= v[i] ;
      }



       cout << product << endl;


    }
    return 0 ;

}
