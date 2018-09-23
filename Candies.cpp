#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;

#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
//z i,j; 
int main() 
{
    fast;
    z t;
    cin>>t;
    for(z j = 1;j<=t;j++)
    {
    db n,i,f;
    cin>>n;
    z fl=0;
    for(i =1;i<=n/5;i++)
    {
        f = (n-5*i)/3;
        if(f-(z)f==0)
        {
            fl=1;
            break;
        }
    }
    if(fl)
        pf("Case %lld: %lld\n",j,3*(z)f);
        //cout << 3*f <<endl;
    else
        pf("Case %lld: -1\n",j);
        //cout << -1 << endl;
}

   return 0;
}
