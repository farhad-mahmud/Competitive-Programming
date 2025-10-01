#include<bits/stdc++.h>
using namespace std;

long long Dactorial(int n) {
   if (n<=1)
       return 1 ;
   else
    return n*Dactorial(n-1) ;


}
int vector_to_integer (const vector <int > & digits)
{
    int number = 0 ;
    for (int digit : digits )
    {
        number = number *10 + digit ;
    }
    return number ;
}
int main() {
    int t ;
    cin >> t ;

    while(t--){
    int result = 0;
    int d_number = 0 ;
    int n, d;
    cin >> n;
    cin >> d;
    vector<int > v_divisor ;

     vector<int > d_factorial ;

     result = Dactorial(n) ;

   for (int i=0;i<result;i++)
   {
           d_factorial.push_back(d);
   }

     d_number = vector_to_integer(d_factorial) ;

    for (int i=1 ;i<10 ;i= i+2)
    {
        if (d_number % i == 0)
        {
            v_divisor.push_back(i) ;
        }
    }
   sort(v_divisor.begin(),v_divisor.end());

   for(int i =0;i<v_divisor.size();i++)

   {
       cout << v_divisor[i] << endl;
   }
    }
    return 0;
}
