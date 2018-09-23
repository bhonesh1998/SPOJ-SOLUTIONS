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
    bool pr[siz];
    memset(pr,true,sizeof(pr));
    for(i=2;i*i<=siz;i++)
    {
      if(pr[i])
      {
        for(j=2*i;j<=siz;j+=i)
          pr[j]=false;
      }
    }


    std::vector<z> v,v1;

   for(i=2;i<=siz;i++)
    {if(pr[i])
      {v.push_back(i);}}

    for(i=0;i<=100000;i+=3)
    {
      v1.push_back(  ( (v[i]*v[i+1])+v[i+2] ) );
    }


    z t;
    cin>>t;
    while(t--)
    {
      z n;
      cin>>n;
      for(i=0;i<n;i++)
      cout <<v1[i]<<" ";

      cout << "\n";
    }





    return 0;
}
