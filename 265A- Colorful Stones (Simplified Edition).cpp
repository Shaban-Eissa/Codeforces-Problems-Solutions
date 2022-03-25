#include <bits/stdc++.h>
using namespace std;
int main () {
    string a , b ;
    int j = 0 , k = 0 ;
    cin >> a >> b ;
    for ( int i  = 0 ; i < b.length() ; i++ ) {
        if ( b[i] == a[j]) {
            k++ ;
            j++ ;
 
        }
 
    }
    cout << k + 1  ;
}
