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
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vuu vector<ull>
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
#define nl endl

#define SP(x, y) fixed << setprecision((x)) << (y)
const ll INF = LLONG_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); //binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); //to binary
    return binary;
}

void solve()
{
    /*
     so i have to find such a sub-sequence which length is the maximum 
     against all possible sub-sequence which can give us all elements of
     the sub-sequence are greater or equal to the maximum value in the present
     sub-sequence
    */
    //-4 -3 -2 0 1 4 6
    //  7   5 2 1 3 2

    //-5 -3 0 2 5
    //  8  3 2 3

    // -3 0 0 2
    //  3 0 2

    int a;
    cin >> a;
    vll v(a);
    for (auto &k : v)
    {
        cin >> k;
    }
    sort(all(v));
    // for (auto k : v)
    //     cout << k << " ";
    // cout << nl;
    int ans = 1, j = a - 1;

    for (int i = a - 1; i > 0; i--)
    {
        j = min(j, i);
        int cnt = i - j + 1;
        while (abs(v[j] - v[j - 1]) >= v[i] && j > 0)
        {
            j--;
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    ll x;
    cin >> x;
    while (x--)
        solve();
}