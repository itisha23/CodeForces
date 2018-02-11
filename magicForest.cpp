/*O(N3 solution)

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
    int a,b,c,n,cou=0,t;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=a;b<=n;b++)
        {
            for(c=b;c<=n;c++)
               {
                if(c>=a+b)
                  break;
                if((a^b^c)==0)
                   cou++;
                }
               
   
         }
            
        
    }
    cout<<cou;
   
}


