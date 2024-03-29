#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll
#define EPS 1e-12
#define MV 1e18
#define MX 10000008
#define mx 2000056
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MEM(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pip pair<int, pii>
#define pul pair<ull, ull>
#define mii map<int, int>
#define mll map<ll, ll>
#define qii queue<int>
#define dii deque<int>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair

const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);
vector<string> save;
void count()
{
    for (int i = 0; i <=63; i++)
    {
        ull a = pow(2, i);
        string b;
        b = to_string(a);
        save.pb(b);
        //  cout << b << endl;
    }
}
void solve()
{
    string s;
    cin >> s;
    int sz = s.size();
    int ans = INT_MAX;
    for (int i = 63 - 1; i >= 0; i--)
    {
        string ss = save[i];
        int k = 0;
        int cnt = 0;
        for (int j = 0; j < ss.size();)
        {
            if (k == sz)
                break;
            if (s[k] == ss[j])
            {
                cnt++;
                j++;
            }
           
                k++;
        }
        //cout << k << endl;
        int pp = (sz + ss.size()) - (2 * cnt);
        ans = min(ans, pp);
    }
    cout << ans << endl;
}
int main()
{
    count();
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}
