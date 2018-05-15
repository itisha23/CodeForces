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
  ll n,i,count;
  cin>>n;
  string s;
  cin>>s;
  i=0,count=0;
  while(i<=s.size()-3)
  {
     if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
     {
        // cout<<s[i]<<endl;
      s.erase(i,1);count++;
     }
     else
      i++;
    cout<<s.size()-3<<endl;
  }
  cout<<count<<endl;
}


