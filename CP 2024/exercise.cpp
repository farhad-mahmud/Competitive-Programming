#include<bits/stdc++.h>
using namespace std;

long long Dactorial(int x, int d) {
    long long result = d;
    for (int i = x; i >= 1; i--) {
        result *= i;
    }
    return result;
}

int main() {
    int t ;
    cin >> t ;

    while(t--){
    int result = 0;
    int x, d;
    cin >> x;
    cin >> d;
    vector <int > v ;
     result = Dactorial(x,d) ;

   for (int i=1;i<10;i=i+2)
   {
       if (result % i ==0)
       {
           v.push_back(i) ;
       }

   }
   sort(v.begin(),v.end());

   for(int i =0;i<v.size();i++)

   {
       cout << v[i] << endl;
   }
    }
    return 0;
}
