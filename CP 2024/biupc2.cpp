#include <iostream>
#include <iomanip>
#include <vector>

using namespace std ;
int main()
{
   int n;
   cin >> n;
    vector<int> temp(n);
    float  sum = 0;
   for(int i=0;i<n;i++)
   {
       cin>> temp[i] ;
       sum+= temp[i];
   }
   float avg = sum/n ;
   cout << fixed <<setprecision(2) << avg << endl;
}
