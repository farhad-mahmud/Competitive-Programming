#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    int polyhedrons = 0;
    int n;
    cin >> n;


    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, str);

        if (str == "Tetrahedron") {
            polyhedrons += 4;
        } else if (str == "Cube") {
            polyhedrons += 6;
        } else if (str == "Octahedron") {
            polyhedrons += 8;
        } else if (str == "Dodecahedron") {
            polyhedrons += 12;
        } else {
            polyhedrons += 20;
        }
    }

    cout << polyhedrons << endl;
    return 0;
}
