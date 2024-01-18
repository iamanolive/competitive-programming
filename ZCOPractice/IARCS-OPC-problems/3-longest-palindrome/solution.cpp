#include <iostream>
#include <string>
using namespace std;
#define endl '\n'

int main() {
    int n; cin >> n;
    string input; cin >> input;
    string maxPalindrome = "a";
    for(int i = 0; i < n - 1; i++) {
        char current = input[i];
        for(int j = n; j > i; j--) {
            if(input[j] == current) {
                int index1 = i, index2 = j;
                string palindrome1 = "";
                string palindrome2 = "";
                while(index1 <= index2) {
                    if(input[index1] == input[index2] && index1 == index2)
                        palindrome1 += input[index1];
                    else if(input[index1] == input[index2]) {
                        palindrome1 += input[index1];
                        palindrome2 += input[index2];
                    } else {
                        palindrome1 = "";
                        palindrome2 = "";
                        index1 = index2;
                    } index1++; index2--;
                } string palindrome = palindrome1;
                for(int i1 = palindrome2.length() - 1; i1 > -1; i1--)
                    palindrome += palindrome2[i1];
                if(palindrome.length() > maxPalindrome.length())
                    maxPalindrome = palindrome;
                palindrome = "";
            }
        }
    } cout << maxPalindrome.length() << endl;
    for(int i = 0; i < maxPalindrome.length(); i++)
        cout << maxPalindrome[i];
    cout << endl;
}