#include<bits/stdc++.h>
using namespace std;
int main () {
    int m,i,n, p,q,flag = 0;
    cin >> n >> p ;
    int x[p], y[q], merge[n];
    for(i=0; i<p; i++)
    {
        cin >> x[i] ;
        m = x[i];
        merge[m] = 1;
    }
    cin >> q ;
    for(i=0; i<q; i++)
    {
        cin >> y[i] ;
        m = y[i];
        merge[m] = 1;
    }
    for(i=1; i<=n; i++)
    {
        if(merge[i]==1)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
 
    if(flag==1)
        cout <<"I become the guy." ;
    else
        cout <<"Oh, my keyboard!" ;
}
