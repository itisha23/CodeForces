#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define fast ios_base::sync_with_stdio();cin.tie(0);cout.tie(0);
#define mod 1000000007
#define inf 2e18
#define pb push_back
#define fi first
#define se second
#define sl(a) scanf("%lld",&a)
#define pl(a) printf("%lld",a)

typedef int l;
typedef unsigned int ul;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vi;


int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,t,x,y,i,in,out;
        t=1;
        cin>>n;
        map<ll,pair<ll,ll> >mp;
        pair<ll,ll>p;
        map<ll,ll>ma;
        for(i=1;i<=n;i++)
        {
            cin>>x>>y;
            p=make_pair(x,y);
            mp.insert(make_pair(i,p));
            
        }
         map<ll,pair<ll,ll> >::iterator it;
         for(it=mp.begin();it!=mp.end();it++)
         {
             p=it->second;
             in=p.first;
             out=p.second+1;
             if(t==in)
             {
                 if(t+1<=out)
                 {
                      ma.insert(make_pair(it->first,t));
                      t++;
                 }
                 else
                  ma.insert(make_pair(it->first,0));
             }
            else if(t<in)
             {
                 t=in;
                 ma.insert(make_pair(it->first,t));
                 t++;
                 
             }
            else
             {
                 if(t<out)
                 {
                      ma.insert(make_pair(it->first,t));
                      t++;
                 }
                else
                 ma.insert(make_pair(it->first,0));
             }
         }
         map<ll,ll>::iterator it1;
         for(it1=ma.begin();it1!=ma.end();it1++)
         {
             cout<<it1->second<<" ";
         }
         cout<<endl;
    }
   
}


