#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define MAXN 100001
#define xx 12345678901
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j;
int main() 
{

    fast;
    z n,s,k;
    cin>>n>>s>>k;
    z a[n];
    for(i=0;i<n;i++) cin>>a[i];
     sort(a,a+n);
 z i=n-1;
 z t = s*k;
 z c=0;
     while(1)
     {
        
        t-=a[i];
        c++;
        if(t<=0)
            break;
        i--;
     }   
     cout << c ;
   return 0;
}
