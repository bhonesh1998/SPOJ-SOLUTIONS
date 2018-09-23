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
        z ans=0;
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            ans+=(s[i]-'0');
        }
        cout << ans <<endl;
    }
   return 0;
}
