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
    z t;
    cin>>t;
    while(t--)
    {
        db a,ga,gb,gc;
        cin>>a>>ga>>gb>>gc;
        db b=a*ga/gb;
        db c=a*ga/gc;
        db s=(a+b+c)/2;
        db area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<setprecision(3)<<fixed<<area<<" ";
        db r=(a*b*c)/(4*area);
        db gh;
        if(r*r-(a*a+b*b+c*c)/9>0) 
        gh=sqrt(r*r-(a*a+b*b+c*c)/9)*2;
        cout<<gh<<endl;
    }
    return 0;
}
