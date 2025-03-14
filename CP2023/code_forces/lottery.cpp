#include<bits/stdc++.h>
#include<iostream>

#define nn endl
#define spc " "
#define ll long long

using namespace std;

void money()
{
    ll n;
   vector<ll> v={1,5,10,20,100};
    int bills=0;
    cin>>n;
    for(int i=v.size()-1;i>=0;i--)
    {
        ll mxbill=n/v[i];
        bills+=mxbill;
        n-=mxbill*v[i];
        cout<< n << endl;
    }
    cout<<bills;
}

int main()
{
    money();

    return 0;
}
