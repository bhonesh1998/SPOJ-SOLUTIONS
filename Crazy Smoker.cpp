#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000001
#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() 
{
   z t;
   cin>>t;
   while(t--)
   {
    z n; 
    cin>>n;
    z p = 30*n;
    z pp=p;
    while(p%11!=0)
    {
        p++;
    }
    
    cout << p-pp<<endl;

   }
}
