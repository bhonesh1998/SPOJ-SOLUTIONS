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
    cin >> t;
    while( t-- )
     {
        z n, k;
        cin >> n >> k;
        vector<z> a(n);
        for(i = 0; i < n; i++)
            cin>>a[i];
        z f = 0, b = 0;
        z max_len = 0;
        z zeros = 0; 
         
        while(b < n) 
        {
            if( a[b] == 0 )
                zeros++;
            if( zeros <= k )
                max_len = max(b-f+1, max_len);
            else 
            {
                while( zeros > k && f < b) {
                    if(a[f] == 0)
                        zeros--;
                    f++;
                }
            }
            b++;
        }
        cout << max_len << endl;
    }
    return 0;
}




  
