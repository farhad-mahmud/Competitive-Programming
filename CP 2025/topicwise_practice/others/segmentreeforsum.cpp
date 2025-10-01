#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 9 ;

int t[N * 4] ;

int a[N] ;

void build(int node , int begin, int end )
{
        
       
     if(begin == end){ 
         
          t[node] = a[begin- 1] ;               // sum of base case 
             return ;
     }

       int l = 2*node , r= 2*node + 1 ;    // left node and right node ;

       int mid = (begin + end) / 2 ;

       build(l,begin,mid);

       build(r,mid+1 , end) ;

       t[node] = t[l] + t[r] ;                   // sum of current node ;

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


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

          int n , m ; 

          cin >>n >> m ;       
         
          
          for(int i=0;i<n;i++){

                  cin>> a[i] ;
          }

         

          build(1,1,n) ;

          for(int i=0;i<m;i++){


                     int k , x, y ;

                     cin >> k >> x >> y ;

                 

                     if(k==1){

                         upd(1,1,n ,x+1,y) ;
                     }
                     else {

                      
                        cout << query(1,1,n ,x+1,y) << endl; 

                     }
          }

    return 0;
}
