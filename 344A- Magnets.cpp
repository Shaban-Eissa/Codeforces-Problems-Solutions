#include <bits/stdc++.h>
using namespace std;
int main () {
 
   int n , count = 1  ;
   int arr[100000]   ;
   cin >> n ;
   for (int i  = 0 ; i < n ; i++) {
       cin >> arr[i] ;
 
   }
    for (int i  = 0 ; i < n - 1 ; i++) {
        if(arr[i] != arr[i+1]) count++ ;
 
    }
    cout << count;
 
}
