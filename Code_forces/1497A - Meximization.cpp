#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
using namespace std;
///cout<<"Case "<<z++<<": "<<__<<endl;
int main()
{
    ll x;
    cin >> x;
    while (x--)
    {
        int y;
        cin >> y;
        vii v(y);
        for (int &t : v)
        {
            cin >> t;
        }
        sort(v.begin(), v.end());
        vii a, b;
        a.pb(v[0]);
        for (int i = 1; i < y; i++)
        {
            if (v[i] != v[i - 1])
            {
                a.pb(v[i]);
            }
        }
        for (int i = 1; i < y; i++)
        {
            if (v[i] == v[i - 1])
            {
                a.pb(v[i]);
            }
        }
        for (int k : a)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}