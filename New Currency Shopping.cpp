
// this solution is nothing but solution of fibonacci series in log(n)
// one thing people always do wrong in this question that they dont observe value of mod is upto 10^11 so x%mod * x%mod give us overflow 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=12345678901LL;
ll r=(ll)sqrt(mod);
ll mulmod(ll a, ll b)
{
   return ((((a/r)*b)%mod)*r+(a%r)*b)%mod;
}
ll mult(vector<vector<ll>> &a,vector<vector<ll>> &b){
    ll c[2][2]={{0,0},{0,0}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                c[i][j]+=mulmod(a[i][k],b[k][j]);
                c[i][j]%=mod;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)a[i][j]=c[i][j];
    }
}
ll powmult(vector<vector<ll>> &a,ll n){
    vector<vector<ll> > res(2);
    res[0].push_back(1);
    res[0].push_back(0);
    res[1].push_back(0);
    res[1].push_back(1);
    while(n){
        if(n&1)
           mult(res,a);
        mult(a,a);
        n/=2;
        //cout<<res[0][0]<<" "<<a[0][0]<<" "<<a[0][1]<<"#\n";
    }
    return (res[0][0])%mod;
}
ll fib(ll a){
    vector<vector<ll> > a1(2);
    a1[0].push_back(1);
    a1[0].push_back(1);
    a1[1].push_back(1);
    a1[1].push_back(0);
    return powmult(a1,a);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        cout<<fib(a)<<"\n";
    }
}
