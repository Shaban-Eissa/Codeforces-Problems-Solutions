#include <bits/stdc++.h>
using namespace std;
int main () {
 
    int n , k , x , y = 0  ;
    cin >> n ;
    for  (int i = 0 ; i < n ; i++) {
        x = 0 ;
        for ( int j = 0 ; j < 3 ; j++) {
            cin >> k ;
            if ( k == 1 ) x++ ;
        }
        if ( x ==  2 || x == 3 ) y += 1 ;
    }
    cout << y ;
 
}
 
 
 
