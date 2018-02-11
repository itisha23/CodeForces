/* O(n2) SOLUTION */

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

int main(){
    ll a,b,c,n,cou=0,t;
    cin>>n;
    for(a=1;a<=n;a++){
      for(b=a;b<=n;b++){
          t=a^b;
          if(a+b>t && t>=b && t<=n)
            cou++;
       }
    }
    cout<<cou;
 }
