#include <bits/stdc++.h>
using namespace std;
int main () {
 
    string s;
    int x = 0, y = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) x++ ;
        else y++ ;
 
    }
 
    if (x > y) {
        char ch;
        for (int i = 0; i < s.size(); i++) {
            ch = toupper(s[i]);
            cout << ch;
        }
    } else {
        char ch;
        for (int i = 0; i < s.size(); i++) {
            ch = tolower(s[i]);
            cout << ch;
        }
 
    }
 
}
