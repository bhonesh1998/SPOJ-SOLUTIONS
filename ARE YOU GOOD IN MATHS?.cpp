#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         double H,A;
        cin>>H>>A;

        if(H*H<4*A)
        {
            cout<<"-1\n";
        }
        else
        {
          double a=(sqrt(H*H+4*A)+sqrt(H*H-4*A))/2;
           double b=(sqrt(H*H+4*A)-sqrt(H*H-4*A))/2;
           printf("%.6lf %.6lf %.6lf\n",min(a,b),max(a,b),H);
     
        }



    }

return 0;}
