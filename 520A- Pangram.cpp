#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n;
    cin >> n ;
    char s[105] ;
    cin >> s ;
    int count = 0 ;
        for ( int i = 0 ; i < n; i++) {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] = char (s[i]+32) ;
            }
 
        }
        sort(s,s+n);
        for(int i = 0 ; i< n-1 ;i++) {
            if (s[i] != s[i + 1]) {
                count++;
            }
        }
    if(count==25)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 
 
 
