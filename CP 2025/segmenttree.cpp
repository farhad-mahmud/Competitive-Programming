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

int query(int node ,int begin,int end ,int i , int j){
        

        if (begin >j or end <i){     // if our segment is out of current node

                return 0 ;
        }
        if(begin >= i and end <= j){  // if our segment is completely inside
                                      // current node 

              return t[node] ;
        }


          int l = 2*node , r= 2*node + 1 ;    // left node and right node ;

          int mid = (begin + end) / 2 ;

 return  query(l,begin,mid,i,j) + query(r,mid+1,end,i,j) ;   // for if our segment
                                                // intersects the current node


} 

void upd(int node ,int begin, int end , int i , int x){   // update the value of a node

          int l = 2*node , r= 2*node + 1 ;    // left node and right node ;

          int mid = (begin + end) / 2 ;

          if(begin > i or end <i) return ;

          if(begin == end and begin == i){

               t[node] = x ;

               return  ;
          }
        
          upd (l,begin,mid,i ,x);
          upd(r,mid+1 , end ,i ,x);
          t[node] = t[l] + t[r] ;

}
int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);
     
               int n = 5 ;
              
              for(int i = 1; i<=n ;i++){


              	     a[i] = i ;
                     
              }

              // a = [1,2,3,4,5] ;
         
          build(1,1,n) ;      // 1,1,n is firt node; 


         cout << t[1] << endl;   // t[1] has the sum of total array , cause its the first node;
              
     
        cout << query(1,1,n,2,4) << endl;  

        upd(1,1,n ,3, 10) ;

        // a = [1,2,10,4,5] ;

        cout << query(1,1,n,2,4) << endl; 

return 0 ;
}


// its brute force but works in log(n) ;