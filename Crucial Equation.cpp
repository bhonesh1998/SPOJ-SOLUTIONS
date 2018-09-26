#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define INT_SIZE 32 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j,k;

int main() 
    {

    fast;
      z t;
      cin>>t;
      for(i=0;i<t;i++)
      {
          z a,b,c;
          cin>>a>>b>>c;
          if(c%__gcd(a,b)==0)
              pf("Case %lld: Yes\n",i+1);
          else
            pf("Case %lld: No\n",i+1);
      }

    return 0;
}




