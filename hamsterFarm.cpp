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
   ll n,k,i,maxi,j,ind;
   cin>>n>>k;
   ll arr[k+1];
   f(i,1,k+1)
   cin>>arr[i];
    if(n==0)
     cout<<1<<" "<<0;
    else{
   maxi=INT_MIN;
   f(i,1,k+1)
   {
       j=(n/arr[i])*arr[i];
       if(j>maxi)
       {
           maxi=j;
           ind=i;
       }
  }
  cout<<ind<<" "<<(n/arr[ind]);}
}


