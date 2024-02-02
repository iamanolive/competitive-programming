#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main() {


    map <char, vector<char>> keyboard;

    keyboard['q'] = {'w', 'q'};
    keyboard['w'] = {'e', 'q'};
    keyboard['e'] = {'r', 'w'};
    keyboard['r'] = {'t', 'e'};
    keyboard['t'] = {'y', 'r'};
    keyboard['y'] = {'u', 't'};
    keyboard['u'] = {'i', 'y'};
    keyboard['i'] = {'o', 'u'};
    keyboard['o'] = {'p', 'i'};
    keyboard['p'] = {'p', 'o'};


    keyboard['a'] = {'s', 'a'};
    keyboard['s'] = {'d', 'a'};
    keyboard['d'] = {'f', 's'};
    keyboard['f'] = {'g', 'd'};
    keyboard['g'] = {'h', 'f'};
    keyboard['h'] = {'j', 'g'};
    keyboard['j'] = {'k', 'h'};
    keyboard['k'] = {'l', 'j'};
    keyboard['l'] = {';', 'k'};
    keyboard[';'] = {';', 'l'};


    keyboard['z'] = {'x', 'z'};
    keyboard['x'] = {'c', 'z'};
    keyboard['c'] = {'v', 'x'};
    keyboard['v'] = {'b', 'c'};
    keyboard['b'] = {'n', 'v'};
    keyboard['n'] = {'m', 'b'};
    keyboard['m'] = {',', 'n'};
    keyboard[','] = {'.', 'm'};
    keyboard['.'] = {'/', ','};
    keyboard['/'] = {'/', '.'};

    char direction; cin >> direction;
    string text; cin >> text;
    if(direction == 'R') {
        for(int i = 0; i < text.length(); i++) {
            cout << keyboard[text[i]][1];
        }
    } if(direction == 'L')
        for(int i = 0; i < text.length(); i++) {
            cout << keyboard[text[i]][0];
        } cout << endl;
}