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
  
 ll k,flag=0,i,j,a,c,d,x,seq1,seq2,ind1,ind2,sum ,n;
 cin>>k;
 multimap<ll,pair<ll,ll> >mp;multimap<ll,pair<ll,ll> >::iterator it;pair<ll,pair<ll,ll> >p;pair<ll,ll>p1;
 //flag=0;
 f(i,0,k)
 {
 	vector<ll>vec;
 	cin>>n;
 	sum=0;
 	f(j,0,n)
 	{
 		cin>>x;
       vec.push_back(x);
       sum+=x;
 	}
 	if(flag==0)
 	{
       f(j,0,n)
       {
       	  a=sum-vec[j];
          p=make_pair(sum-vec[j],make_pair(i,j));
          if(mp.count(a)==0)
          	mp.insert(p);
          else
          {
          	it=mp.find(a);
          	p1=it->second;
            //p1=mp[a];
            c=p1.first;
            d=p1.second;
            if(c!=i)
            {
            	seq1=c;ind1=d;seq2=i;ind2=j;
            	flag=1;
            	break;
            }
          }
       }
 	}
 }
 if(flag==1)
 {
 	cout<<"YES\n";
 	cout<<seq1+1<<" "<<ind1+1<<endl;
 	cout<<seq2+1<<" "<<ind2+1<<endl;
 }
 else
 	cout<<"NO\n";
}


