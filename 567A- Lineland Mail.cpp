#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n ,  k , m ;
   cin >> n ;
   int arr[n] ;
   for  (int i  = 0 ; i < n ; i++) {
       cin >> arr[i] ;
   }
    for  (int i  = 0 ; i < n ; i++) {
        if ( i == 0 ) {
            m=abs(arr[i]-arr[i+1]);
            k=abs(arr[i]-arr[n-1]);
        }
        else if(i == n-1){
            k=abs(arr[i]-arr[0]);
            m=abs(arr[i]-arr[i-1]);
        }
        else{
            m=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
            k=max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
        }
        cout << m << " " << k << endl ;
 
 
    }
 
}
 
 
