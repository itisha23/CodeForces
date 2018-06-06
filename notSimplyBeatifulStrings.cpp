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
    ll i;
    string s;
    cin>>s;
    map<char,ll>se;map<char,ll>::iterator it,it1;
     f(i,0,s.size())
         {
            if(se.count(s[i])==0)
            se.insert(make_pair(s[i],1));
        else
            se[s[i]]=se[s[i]]+1;
       }
    if(se.size()==2)
    {
        
           it=se.begin();
           it1=it;
           it1++;
           if(it->second<2||it1->second<2)
           {
                cout<<"No\n";
               // return;
           }
           
           else cout<<"Yes\n";

             
         
    }
  
    else if(se.size()==4)
        cout<<"Yes";
    else if(se.size()==3)
    {
        if(s.size()>3)
          cout<<"Yes";
         else
            cout<<"No";
    }
    else
        cout<<"No";
        
}
