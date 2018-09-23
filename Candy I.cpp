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
    z t; cin>>t;
    while(t!=-1)
    {
        z ans=0,te,s=0,a[t];
        for(i=0;i<t;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        te=s/t;
        if(te*t==s)
        {
            for(i=0;i<t;i++)
             {
                 if(te>a[i])
                    ans+=te-a[i];
            }
            cout << ans <<endl;
        }
        else cout << -1 <<endl;
        cin>>t;
        
    }
   return 0;
}
