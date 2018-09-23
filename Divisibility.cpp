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
        z n,x,y;
        cin>>n>>x>>y;
        for(i=2;i<n;i++)
        {
            if(i%x==0 && i%y!=0)
                cout<<i<<" ";
        }
        cout << "\n";
    }


   return 0;
}
