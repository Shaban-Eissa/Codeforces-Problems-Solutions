#include<bits/stdc++.h>
using namespace std;
int main (){
    long long n , k ;
    cin >> n >> k;
    if (n % 2 == 0){
        n = n / 2;
    }
    else{
        n = (n + 1) / 2;
    }
    if (k <= n){
        cout << 1 + 2*(k - 1);
    }
    else{
        cout << 2 + 2 * (k - n - 1);
    }
}
