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
    while(1)
    {
        z n,s=0;
        cin>>n;
        if(n==0)
            break;
        else
        {
            z a[n],b[n];
            for(i=0;i<n;i++)
                cin>>a[i];
            sort(a,a+n);

            for(i=0;i<n;i++)
                cin>>b[i];
             sort(b,b+n);

             for(i=0;i<n;i++)
             {
                s+=(a[i]*b[n-i-1]);
             }

        }
        cout << s <<endl;
    }
   return 0;
}
