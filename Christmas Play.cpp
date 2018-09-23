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
    z t;
    cin>>t;
    while(t--)
    {
        z n,k;
        cin>>n>>k;
        z a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        z d=a[k-1]-a[0];
        for(i=0;i<=n-k;i++)
        {
            d=min(d,a[i+k-1]-a[i]);
        }
      cout << d <<endl;  
    }
   return 0;
}
