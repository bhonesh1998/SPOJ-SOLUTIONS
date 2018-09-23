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
bool safe(z n , z m , z x , z y)
{

    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<m;j++)
    //     {
    //         cout << a[i][j];
    //     }
    // }


     if(x>=0 && x<n && y>=0 && y<m && a[x][y]==0)
    {
        return true;
    }
    else return false;
}
int main() 
{
    fast;
    z n,m;

    cin>>n>>m;
    //z a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
z c=0;
    z x,y;
    cin>>x>>y;
    x--;y--;

    if(safe(n,m,x-1,y+2)) c++;
     if(safe(n,m,x+1,y+2))c++;
         if(safe(n,m,x-2,y+1))c++;
             if(safe(n,m,x-2,y-1))c++;
                 if(safe(n,m,x-1,y-2))c++;
                     if(safe(n,m,x+1,y-2))c++;
                         if(safe(n,m,x+2,y-1))c++;
                             if(safe(n,m,x+2,y+1))c++;

                             cout << c;


   return 0;
}
