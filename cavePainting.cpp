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

map<ll,ll>m;
int main(){
    ll n,k,i,flag=0;
    cin>>n>>k;
    if(n==k && n!=1)
       cout<<"No";
    else if(k>=n+2)
       cout<<"No";
    else{
          for(i=1;i<=k;i++){
            if(m[n%i]==1){
               cout<<"No";
               return 0;
            }
            m[n%i]=1;
          }
        cout<<"Yes";
    }
  }


