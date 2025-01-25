#include <iostream>
using namespace std;

int main() {
    long long h1, b1, c1, h2, b2, c2;
    cin >> h1 >> b1 >> c1;
    cin >> h2 >> b2 >> c2;

    long long m_t = 0, j_t = 0;

    while (h2 > 0) {
        if (m_t % c1 == 0) {
            h2 -= 2 * b1;
        } else {
            h2 -= b1;
        }
        ++m_t;
    }

    while (h1 > 0) {
        if (j_t % c2 == 0) {
            h1 -= 2 * b2;
        } else {
            h1 -= b2;
        }
        ++j_t;
    }

    if (m_t < j_t) {
        cout << "MIKE TYSON\n";
    } else if (j_t < m_t) {
        cout << "JAKE PAUL\n";
    } else {
        cout << "DRAW\n";
    }

    return 0;
}
