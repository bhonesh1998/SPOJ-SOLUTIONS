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
{   fast;
    z n;
    cin>>n;
    string s;
    cin>>s;
    map<char,char> m;
    for(i=0;i<n-1;i++)
    {
      m[s[i]]=s[i+1];
    }
    m[s[n-1]]=s[0];
    z t;
    cin>>t;
     cin.ignore(100,'\n');
    while(t--)
    {
        
        string p;
        getline(cin,p);
        for(i=0;i<p.length();i++)
        {
          if(m.find(p[i])!=m.end())
          {
            p[i]=m[p[i]];
          }
        }
        cout << p <<endl;
    }
    return 0;
}
