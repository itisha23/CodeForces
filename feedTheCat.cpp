#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define fast ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
#define mod 1000000007
#define inf 2e18
#define pb push_back
#define fi first
#define se second

typedef int l;
typedef unsigned int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vi;



int main()
{
    ll hh,mm,hh1,mm1,minutes;
    cin>>hh>>mm;
    ll h,d,c,n;
    cin>>h>>d>>c>>n;
    hh1=20;mm1=0;
    
   
    double c2,c1,n1,n2;
     if(hh>=hh1)
     {
        n1=ceil(h/(n*1.0));
        c1=(n1*c);
        c2=0.8*c1*1.0;
        cout<<c2<<endl;
     }
     else
     {
        hh1=hh1-1;
        mm1=60;
        minutes=(hh1-hh)*60+(mm1-mm);

         n1=ceil(h/(n*1.0));
         c1=n1*c;

         n2=ceil((h+minutes*d)/(1.0*n));
         c2=n2*c*1.0;
         c2=0.8*c2*1.0;
         cout<<min(c1,c2);
     }
        
}
