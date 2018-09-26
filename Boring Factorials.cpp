#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 20000001
#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j;

z pow_mod(z a,z b,z m)
{
 z x=1,y=a;
 while(b>0)
 {
  if(b & 1)
   x=(x*y)%m;
  y=(y*y)%m;
  b>>=1;
 }
 return x;
}
int main() 
{

    fast;
    z t;
    cin>>t;
    while(t--)
    {
        z n,p;
        cin>>n>>p;
        z r=1;
        if(n>=p) cout << 0 <<endl;
        else
        {
            for(i=n+1;i<p;i++)
            {

                r=(r*(pow_mod(i,p-2,p)))%p;
            }
            cout << p-r <<endl;

        }

    }
    
}
