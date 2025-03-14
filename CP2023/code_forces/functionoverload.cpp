#include<iostream>
using namespace std ;
int add (int a,int b)
{
    return a+b ;
}
double add(double a,double b)
{
    return a+b ;
}
int main ()
{
    cout <<"sum of integers : " << add(5,7) << endl;
    cout << "sum of floats : " << add(3.5,2.1) << endl;
    return 0 ;

}
