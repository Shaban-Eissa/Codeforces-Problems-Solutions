#include<iostream>
using namespace std ;
int main ( ) {
 
int n ;
cin >> n ;
 
int arr [ n ] ;
 
int sum = 0 ; 
 
for ( int i = 0 ; i < n ; i++ )
{
 
 cin >> arr[ i ] ;
 
  
}
 
 
int l = 0 ;
int r = n-1 ;
bool p = true ;
int s = 0 ;
int d = 0 ; 
while ( l <= r  ){
 
 
 if(arr[l]>=arr[r])
            {
              if(p)
                  s+=arr[l];
              else
                  d+=arr[l];
 
              l++;
              
               }
 
            else if(arr[r]>arr[l])
            {
                if(p)
                    s+=arr[r];
                else
                    d+=arr[r];
 
                r--;
            }
 
 
  if(p)
                p=false;
            else
                p=true;
        }
 
 
cout << s << "  " << d ; 
 
}
