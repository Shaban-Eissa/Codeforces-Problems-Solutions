#include <iostream>
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
using namespace std;
 
int main()
{
    int n,x;
    cin>>n;
    vector<bool> v(n,false);
    int next = n;
    for(int p = 0; p < n; p++){
        cin>>x;
        v[x] = true;
 
        while(v[next] == true){
            cout<<next<<" ";
            --next;
        }
        cout<<endl;
    }
}
