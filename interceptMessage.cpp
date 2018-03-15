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
//freopen("inp.in","r",stdin);      
   ll n,m,f,r,i,count=0,s1,s2;
   cin>>n>>m;
   ll arr[n+1];
   ll brr[m+1];
//cout<<"hi";
   f(i,1,n+1)
   cin>>arr[i];
   f(i,1,m+1)
   cin>>brr[i];
   f=0;r=0;s1=0;s2=0;
   while(1)
   {
       if(s1==s2)
       {
           //cout<<"hi";
           if(f!=0 && r!=0)
           count++;
           f++;
           r++;
           if(f>n && r>m)
              break;
           s1=arr[f];
           s2=brr[r];
       }
       else if(s1<s2)
       {
           f++;
           s1+=arr[f];
           continue;
       }
       else
       {
           r++;
           s2+=brr[r];
           continue;
       }
   }
   cout<<count;
}


