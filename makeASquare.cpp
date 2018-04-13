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

vector<string>vec;

string conv(ll n)
{
	stringstream ss;
	ss<<n;
	string str=ss.str();
	return str;
}

void getString(string s,ll digitsLeft)
{
	if(digitsLeft==0)
		vec.push_back(s);
	else
	{
		getString(s+"0",digitsLeft-1);
		getString(s+"1",digitsLeft-1);
	}
}
int main()
{
     ll n,i,ans=INT_MIN,j,a,len;
     string s,str;
     cin>>n;
     str=conv(n);
     len=str.size();
     set<string>se;
     for(i=1;i*i<=2000000000;i++)
     {
     	s=conv(i*i);
     	se.insert(s);
     }
     	
     getString("",len);
     
     
     for(i=0;i<vec.size();i++)
     {
     	s="";
     	for(j=0;j<vec[i].size();j++)
     	{
     		if(vec[i][j]=='1')
     			s=s+str[j];
     	}
     	if(se.find(s)!=se.end())
     	{
     		a=s.size();
     		ans=max(ans,a);
     	}
     }
    // cout<<ans<<endl;
     if(ans!=INT_MIN)
     cout<<len-ans<<endl;
     else
     cout<<-1<<endl;

}


