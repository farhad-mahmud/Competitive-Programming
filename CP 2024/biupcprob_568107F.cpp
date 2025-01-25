#include <bits/stdc++.h>
using namespace std;

long long calculate_time(long long health, long long damage, long long sp_damage, long long sp_time) {
    long long time = 0;


    long long special_hits = health / sp_damage;
    time += special_hits * sp_time;


    health -= special_hits * sp_damage;


    if (health > 0) {
        time += (health + damage - 1) / damage;
    }

    return time;
}

int main() {
    long long h1, b1, c1;
    cin >> h1 >> b1 >> c1;

    long long h2, b2, c2;
    cin >> h2 >> b2 >> c2;


    long long t1 = calculate_time(h1, b2, 2 * b2, c2);
    long long t2 = calculate_time(h2, b1, 2 * b1, c1);


    if (t2 > t1) {
        cout << "JAKE PAUL" << endl;
    } else if (t1 > t2) {
        cout << "MIKE TYSON" << endl;
    } else {
        cout << "DRAW" << endl;
    }

    return 0;
}
