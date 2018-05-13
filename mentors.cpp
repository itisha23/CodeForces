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
  ll n,k,i,x,y,c,val,ind,a;
  cin>>n>>k;
  ll q[n+1];
  f(i,1,n+1)
   cin>>q[i];
  ll ans[n+1];
  ll minus[n+1];
  f(i,1,n+1)
    minus[i]=0;
  f(i,0,k)
  {
    cin>>x>>y;
    if(q[x]>q[y])
      minus[x]++;
    if(q[y]>q[x])
      minus[y]++;
  }
  multimap<ll,ll>mp;
  f(i,1,n+1)
  {
    mp.insert(make_pair(q[i],i));
  }

   multimap<ll,ll>::iterator it1,it,it2;
  it1=mp.begin();
  ans[it1->second]=0;
  it=it1++;
  c=0;
  while(it!=mp.end())
  {
     val=it->first;
     ind=it->second;
     if(val>it1->first)
     {
      if(mp.lower_bound(it1->first)!=it1)
      {
        it2=mp.lower_bound(it1->first);
        a=distance(it2,it);//cout<<a<<endl;
        c=c+a;
      }
      else
        c=c+1;
     
     ans[ind]=c;
     it1=it;
     it++;
  }
  f(i,1,n+1)
  ans[i]=ans[i]-minus[i];
  f(i,1,n+1)
  cout<<ans[i]<<" ";
}


