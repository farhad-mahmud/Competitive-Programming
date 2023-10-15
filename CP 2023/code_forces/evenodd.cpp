#include<iostream>
using namespace std;
int main()
{
    long long  n,k ;
    while(cin >> n >> k)
    {
        if(n%2==0){
            if(k<=n/2){
                cout<<k*2-1<<endl;
            }
            else{
                k=k-n/2;
                cout<<k*2<<endl;
            }
        }
        else{
            if(k<=(n/2+1)){
                cout<<k*2-1<<endl;
            }
            else{
                k=k-(n/2 + 1);
                cout<<k*2<<endl;
            }
        }
    }



}
