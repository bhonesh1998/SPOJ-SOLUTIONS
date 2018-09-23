#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j; 
z a[100][100];

int main() 
{
    fast;
    z a,b,p,q;
    cin>>a>>b;
    if(a%2==0)
        p=a/2;
    else
        p=a/2+1;
     if(b%2==0)
        q=b/2;
    else
        q=b/2+1;

    cout << q*q-p*p;


   return 0;
}
