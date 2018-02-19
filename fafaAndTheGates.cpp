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
    ll n,i,x1,x2,x3,y1,y2,y3,cou=0;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<ll,ll> >vec;
    vec.push_back(make_pair(0,0));
    if(n<3)
     cout<<"0"<<endl;
    else
{
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='U')
        {
            vec.push_back(make_pair(vec[i].first,vec[i].second+1));
        }
        else
             vec.push_back(make_pair(vec[i].first+1,vec[i].second));
    }
    for(i=0;i<=vec.size()-3;i++)
    {
        x1=vec[i].first;  x2=vec[i+1].first;  x3=vec[i+2].first;
        y1=vec[i].second;  y2=vec[i+1].second;  y3=vec[i+2].second;
        if(x2==y2)
        {
            if(((x3-x1)==2 && (y1==y2 && y2==y3))||((y3-y1==2)&&(x1==x2 && x2==x3)))
            cou++;
        }
    }
    cout<<cou<<endl;}
}


