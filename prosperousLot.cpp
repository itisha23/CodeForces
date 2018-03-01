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
    ll k,j,pro=0;
    cin>>k;
    if(k>36)
    cout<<"-1";
    else{
         j=1;
        while(j<=(k/2)) {
          pro=pro*10+8;
          j++;
        }
        if(k%2==0)
         cout<<pro;
        else{
           pro=pro*10+6;
            cout<<pro;
        }
        }
}


