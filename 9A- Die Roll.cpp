#include <bits/stdc++.h>
using namespace std;
int main () {
    int a , b ;
    cin >> a >> b ;
    string arr[6] {"1/6" , "1/3" , "1/2" , "2/3" , "5/6" , "1/1"} ;
    int x = max  ( a   ,   b ) ;
    cout << arr[6-x] ;
 
}
