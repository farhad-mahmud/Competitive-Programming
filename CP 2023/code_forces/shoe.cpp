#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d,sum;
    int arr[4];
    while(cin >> arr[0] >> arr[1] >> arr[2]>> arr[3] )
    {
        sort(arr , arr+1+3);
        sum=1;
        if (arr[0]!=arr[1])
        {
            sum++;
        }
        if (arr[1]!=arr[2])
        {
            sum++;
        }
        if (arr[2]!=arr[3])
        {

            sum++;
        }
        cout << 4-sum << endl;
    }
    return 0;

}
