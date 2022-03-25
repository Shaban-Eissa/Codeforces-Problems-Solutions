#include <bits/stdc++.h>
using namespace std;
int main () {
    string s ;
    getline(cin , s);
    set<char> a ;
    int i = 0;
    while(s[i])
    {
        if(isalpha(s[i]))
            a.insert(s[i]);
        i++;
    }
    cout << a.size() ;
}
 
 
