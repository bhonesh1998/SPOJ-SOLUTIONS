#include <bits/stdc++.h>
using namespace std;
#define z long long int 
z i,j;
int main()
{
    z t;
    cin>>t;
    while(t--)
    {
        
        z n;
        cin>>n;
        cin.ignore(100,'\n');
        
        map<string,z> m;
          map<string,z>:: iterator it ;
        while(n--)
        {
            string s;
            
            getline(cin,s);
            m[s]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            cout << it->first << " " <<it->second <<endl;
        }
        
    }
    

	return 0;
}
