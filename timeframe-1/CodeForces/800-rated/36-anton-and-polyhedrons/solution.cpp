#include <iostream>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    int counter = 0;
    for(int i = 0; i < n; i++) {
        string figure; cin >> figure;
        if(figure == "Tetrahedron") counter += 4;
        else if(figure == "Cube") counter += 6;
        else if(figure == "Octahedron") counter += 8;
        else if(figure == "Dodecahedron") counter += 12;
        else if(figure == "Icosahedron") counter += 20;
    } cout << counter << endl;
}