#include <bits/stdc++.h>
using namespace std;
int main () {
    long long  n , k , b , count = 0 ;
    char a ;
    cin >> n >> k ;
    long long  sum = k ;
    while(n--) {
        cin >> a >> b ;
        if ( a == '+') sum += b ;
        else if ( a == '-') {
            if  ( sum >= b  ) sum -= b ;
            else count++ ;
        }
    }
    cout << sum <<" " <<count;
}
 
 
