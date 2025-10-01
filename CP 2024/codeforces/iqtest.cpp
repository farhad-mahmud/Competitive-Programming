#include<iostream>
using namespace std ;
int main()
{
     int n  ;
     cin >> n ;
     int num[n];
     int k =0 ,index =0 ;
     for(int i=0 ;i< n ;i++)
     {
          cin >> num[i] ;
           if(num[i]%2==0)
         {
             k++;
         }

     }
     for(int i=0 ;i<n;i++)
     {
           if (k>1)
           {
               if(num[i]%2!=0)
               {
                   cout << i+1 ;
               }
           }
           else
           {
               if(num[i]%2==0)
               {
                   cout << i+1 ;
               }
           }
     }
     return 0 ;
}
