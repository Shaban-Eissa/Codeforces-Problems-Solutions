#include <bits/stdc++.h>
using namespace std;
int main () {
 
    int n , k  , m , sum = 0  ;
    cin >> n  >> k ;
    for ( int i  = 0  ; i < n ; i++  ) {
        cin >> m ;
        if ( m <= k ) {
            sum += 1 ;
        }
        else sum += 2 ;
    }
    cout << sum ;
 
 
}
 
 
 
