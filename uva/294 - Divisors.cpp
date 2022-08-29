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
#define mod 1000000007
const ll INF = LLONG_MAX;

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int kr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int kc[] = {-1, 1, -2, 2, -2, 2, -1, 1};

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
/// cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
        is >> in;
    return is;
}
//******************************** Template ***********************

//******************************** Function ***********************
ull toDecimal(string bin)
{
    unsigned long deci = std::bitset<16>(bin).to_ulong(); // binary string to decimal
    return deci;
}
string toBinary(ll decimal)
{
    std::string binary = std::bitset<16>(decimal).to_string(); // to binary
    return binary;
}
// bool isValid(int x, int y)
// {
//     if (x >= 0 && y >= 0 && x < x && y < y && vis[x][y] == false) // out of box or not
//         return true;
//     return false;
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;
bool check[66000];
vll prime;
void sieve()
{
    for (ll i = 4; i <= 66000; i += 2)
    {
        check[i] = false;
    }
    for (ll i = 3; i * i <= 66000; i += 2)
    {
        if (!check[i])
            for (ull j = i * i; j <= 66000; j += i * 2)
            {
                check[j] = true;
            }
    }
    prime.pb(2);
    for (ll i = 3; i <= 66000; i += 2)
    {
        if (!check[i])
        {
            prime.pb(i);
        }
    }
}
void solve()
{

    /*

    */
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    ll val = a;
    ll now = 0, current = 0;
    for (ll i = a; i <= b; i++)
    {
        now = i;
        current = 1;
        for (ll j = 0; j < prime.size(); j++)
        {
            if (now % prime[j] == 0)
            {
                ll cnt = 0;
                while (now % prime[j] == 0)
                {
                    cnt++;
                    now /= prime[j];
                }
                current *= (cnt + 1);
            }
        }

        if (current > ans)
        {
            ans = current;
            val = i;
        }
    }
    cout << "Between " << a << " and " << b << ", " << val << " has a maximum of " << ans << " divisors." << nl;
}

int main()
{
    FIO;
    sieve();
    ll x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}