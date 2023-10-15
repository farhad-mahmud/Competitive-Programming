#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;

    int a,b,c;
    cin >> a >> b >> c ;
    int cal1,cal2,cal3,cal4 ;

    cal1 = a+b*c ;
    v.push_back(cal1);

    cal2 = a*(b+c);
    v.push_back(cal2);

    cal3 = (a*b*c);
    v.push_back(cal3);

    int  cal6 = a*b+c;
    v.push_back(cal6);

    cal4 = (a+b)*c;
    v.push_back(cal4);

    int cal5 = (a+b+c);
    v.push_back(cal5);


    cout << *max_element(v.begin(), v.end()) << endl;



    return 0;
}
