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
#define MX 100000009
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
#define djt priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp mate_pair
#define nl endl
#define SP(x, y) fixed << setprecision((x)) << (y)
#define mod 1000000007
const ll INF = LLONG_MAX;

int fx[] = {0, 1, 0, -1};
int fy[] = {-1, 0, 1, 0};
int tr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int tc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
//#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
//#endif
/// cout<<"Case "<<z++<<": "<<__<<endl;

// typedef bool (*comp)(pii, pii);

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
// bool is(int x, int y)
// {
//     if (x >= 0 && y >= 0 && vis[x][y] == false) // out of box or not
//         return true;
//     return false;
// }
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////

int z = 1;

void solve()
{
    /*

     */

    int a;
    cin >> a;
    vii v(a);
    cin >> v;
    int even = 1, odd = 1;

    int cnt = count(all(v), v[0]);
    if (cnt == a)
    {
        cout << "YES" << nl;
        return;
    }

    int aa = 0, bb = 0;
    for (int i = 0; i < a; i++)
    {
        if (v[i] % 2 == 0)
        {
            aa = 1;
        }
        else
        {
            aa = 0;
            break;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (v[i] % 2 == 1)
        {
            bb = 1;
        }
        else
        {
            bb = 0;
            break;
        }
    }
    if (aa or bb)
    {
        cout << "YES" << nl;
        return;
    }

    if (v[0] % 2 == 0)
    {
        even = 1;
        odd = 0;
    }
    else
    {
        even = 0;
        odd = 1;
    }
    bool ans = true;
    for (int i = 0; i < a; i += 2)
    {
        if (v[i] % 2 == odd)
            continue;
        else
        {
            ans = false;
            break;
        }
    }
    for (int i = 1; i < a; i += 2)
    {
        if (v[i] % 2 == even)
            continue;
        else
        {
            ans = false;
            break;
        }
    }

    if (ans)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
        solve();
}
