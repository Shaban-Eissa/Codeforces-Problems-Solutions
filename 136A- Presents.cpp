#include <bits/stdc++.h>
using namespace std;
int main() {
   int n , arr [100] , k[100];
   cin >> n ;
   for ( int i = 0 ; i < n ; i++) {
       cin >> arr[i] ;
       k[arr[i]-1] = i+1 ;
 
   }
    for ( int i = 0 ; i < n ; i++) {
        cout << k[i] <<" " ;
 
    }
 
 
}
 
 
