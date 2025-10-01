#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std ;
int main()
{
    int y , w ;
    cin >> y >> w ;
    int arr[6] = {1,2,3,4,5,6} ;
    int arr1[6] = {0} ;
    for(int i=0;i<6;i++)
    {
        if (arr[i]>= y || arr[i] >= w)
        {
            arr1[i] == arr[i] ;
        }
    }
    for(int i = 0 ;i< 6;i++)
    {
        cout << arr1[i] << endl;
    }
    return 0 ;
}
