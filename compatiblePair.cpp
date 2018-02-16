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
  ll maxi=pow(2,63)-1;
     cout<<maxi;
    ll n,m,i,j,k,ans1=-9223372036854775808,ans2=9223372036854775807,hide,pro;
    cin>>n>>m;
    ll arr1[n+1];
    ll arr2[m+1];
    f(i,1,n+1)
    cin>>arr1[i];
    f(i,1,m+1)
    cin>>arr2[i];
    f(i,1,n+1)
    {
        hide=i;ans1=-9223372036854775808;
        f(j,1,n+1)
        {
            if(hide!=j)
            {
                f(k,1,m+1)
                {
                    pro=arr2[k]*arr1[j];
                    ans1=max(ans1,pro);
                }
            }
        }
        ans2=min(ans2,ans1);
    }
   cout<<ans2;
}


