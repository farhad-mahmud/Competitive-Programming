#include<iostream>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;


    int cost1 = n * a;


    int x = n / m;
    int remainingRides = n % m;
    int cost2 = x * b + remainingRides * a;


    int cost3 = (x + 1) * b;


    int minCost = min(cost1, min(cost2, cost3));

    cout << minCost << endl;

    return 0;
}
