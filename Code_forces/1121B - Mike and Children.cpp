#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pii   pair<int,int>
#define  pll   pair<ll,ll>
#define  mii   map<int,int>
#define  mll   map<ll,ll>
#define  vip   vector<pair<int,int>>
#define  vlp   vector<pair<ll,ll>>
#define  pb    push_back
#define  mp    make_pair
using namespace std;
bool cmp(string &a,string &b)
{
    return a.size()<b.size();
}

int main()
{
    int x;
    ll r=0,cnt=0;
    mll mp;
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<x; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            r = arr[i]+arr[j];
            mp[r]++;
            cnt = max(cnt,mp[r]);
        }
    }
    cout<<cnt;
}