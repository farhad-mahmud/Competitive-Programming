#include <bits/stdc++.h>

using namespace std;


const int N = 1e5 + 9 ;

int a[N] ;

int t[N * 4] ;


void build(int node , int begin, int end)
{

	  if(begin == end){ 
         
          t[node] = a[begin] ;                // base case er sum
	  	       return ;
	  }

       int l = 2*node , r= 2*node + 1 ;    // left node and right node ;

       int mid = (begin + end) / 2 ;

       build(l,begin,mid);

       build(r,mid+1 , end) ;

       t[node] = t[l] + t[r] ;                   // sum of current node ;




} 
int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);
     
               int n = 5 ;
              
              for(int i = 1; i<=n ;i++){


              	     a[i] = i ;
              }
         
          build(1,1,n) ;


         cout << t[1] << endl;   // t[1] has the sum of total array , cause its the first node;
              

return 0 ;
}
