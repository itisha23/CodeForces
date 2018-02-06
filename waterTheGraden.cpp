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
        ll n,k,i,j,t,cou=0,l,r,flag=0;
        cin>>n>>k;
        ll col[n+1];
        ll arr[k+1];
        f(i,1,n+1)
        col[i]=0;
        for(i=1;i<=k;i++)
        {
            cin>>arr[i];
            col[arr[i]]=1;
        }
       
        cou=k;
        if(cou==n)
        {
            cout<<1<<endl;
        }
        else
        {
            t=2;
            while(cou!=n)
            {
                for(i=1;i<=k;i++)
                {
                    l=arr[i]-(t-1);
                    r=arr[i]+(t-1);
                    for(j=l;j<=r;j++)
                    {
                        if(j>0 && j<=n && col[j]==0)
                        {
                            col[j]=1;
                            cou++;
                            if(cou==n)
                              {
                                  flag=1;
                                   break;
                              }
                           
                        }
                    }
                      if(flag)
                       break;
                }
                 if(flag)
                       break;
                t++;
            }
            cout<<t<<endl;
        }
        
        
    }
   
}


