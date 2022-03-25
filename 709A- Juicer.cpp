#include <bits/stdc++.h>
using namespace std;
int main () {
 
 
    long long  a , b , d , sum = 0 , count = 0  ;
    cin >> a >> b >> d ;
    int arr[a] ;
    for  (int i  = 0 ;  i < a ; i++ ) {
        cin >> arr[i] ;
        if ( arr[i] > b ) continue;
        else {
 
            sum += arr[i] ;
            if  (sum > d ) {
                count++ ;
                sum = 0 ;
            }
 
        }
    }
    cout << count ;
 
 
}
