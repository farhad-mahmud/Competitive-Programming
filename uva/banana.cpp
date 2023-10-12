#include<iostream>
using namespace std;
int main (){
    int k,n,w;
    int borrow=0;
    int cost=0;
    cin>> k >> n >> w ;
    for(int i=1;i<=w;i++){
        cost+=(i*k);
    }
    if(cost==n){
        borrow=0;
    }
    else if(cost>n){
        borrow =(cost-n);
    }
    cout<<borrow<<"\n";
    return 0;

}
