#include <iostream>
using namespace std;

int main() {
    int h, w; cin >> h >> w;
    int pieceCount = 0;
    for(int i = 0; i < h; i++) {
        string arr; cin >> arr;
        for(int j = 0; j < w; j++)
            if(arr[j] == '#')
                pieceCount++;
    } cout << pieceCount << '\n';
}