#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 20000001
#define INT_SIZE 32 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z i,j,k;

int main() 
    {


    fast;
     z *dp = new z[siz];
     dp[1]=0;
     for(i=2;i<siz;i++)
     {
        dp[i]=1+dp[i-1];
        if(i%2==0) dp[i]=min(dp[i],1+dp[i/2]);
        if(i%3==0) dp[i]=min(dp[i],1+dp[i/3]);
     }
      z t;
      cin>>t;
      for(i=0;i<t;i++)
    {
        z n; 
        cin>>n;
        pf("Case %lld: %lld\n",i+1,dp[n]);
    }

    return 0;
}




