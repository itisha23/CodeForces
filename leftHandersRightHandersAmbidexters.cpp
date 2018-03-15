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
//freopen("inp.in","r",stdin);      
   ll l,r,a,x,d;
   cin>>l>>r>>a;
   if(l==r)
   x=l+a/2;
  else if(l<r)
   {
       d=r-l;
       if(a<d)
       {
           l=l+a;
           a=0;
       }
       else
       {
           l=l+d;
           a=a-d;
           
       }
       x=l+a/2;
   }
    else
    {
         d=l-r;
       if(a<d)
       {
           r=r+a;
           a=0;
       }
       else
       {
           r=r+d;
           a=a-d;
           
       }
       x=r+a/2;
        
    }
     cout<<x*2;
}


