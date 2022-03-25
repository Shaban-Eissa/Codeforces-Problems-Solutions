#include <bits/stdc++.h>
using namespace std;
int main() {
    char arr[1000] ;
    cin >> arr;
    if ( isupper(arr[0])) cout << arr;
    else if ( islower(arr[0])) {
        arr[0] -= 32 ;
        cout << arr;
 
    }
 
}
 
 
