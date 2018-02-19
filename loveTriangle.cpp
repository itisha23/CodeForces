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

map<ll,ll>mp;
 
ll love(ll x)
{
    ll i,cou;
    cou=0;i=x;
    while(mp[i]!=x &&cou<2)
    {
        i=mp[i];
        cou++;
    }
    if(cou==2 && mp[i]==x)
    return 1;
    else
    return 0;
}

int main()
{
   ll n,i,flag=0,x;
   cin>>n;
  
   f(i,1,n+1)
   {
       cin>>x;
       mp.insert(make_pair(i,x));
   }
   f(i,1,n+1)
   {
       flag=love(i);
       if(flag)
       break;
   }
  
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}


