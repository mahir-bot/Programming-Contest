#include<bits/stdc++.h>
#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  pi    acos(-1.0)
#define  ll    long long
#define  EPS   1e-12
#define  mx    2000005
#define  vii   vector<int>
#define  vll   vector<ll>
#define  pb    push_back
using namespace std;
int main()
{
    ll x;
    cin>>x;
    while(x--)
    {
        string a;
        cin>>a;
        int sum=0;
        for(int i=0; i<a.size(); i++)
        {
            sum+=a[i]-'0';
        }
        cout<<sum<<endl;
    }
}
