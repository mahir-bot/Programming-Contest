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
#define vul vector<ull>
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
inline T bitOn(T n, T pos) { return n | ((T)1 << pos); }
template <class T>
inline T bitOff(T n, T pos) { return n & ~((T)1 << pos); }
template <class T>
inline T isOn(T n, T pos) { return (bool)(n & ((T)1 << pos)); }

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
}

int main()
{
    FIO;
    map<char, int> m;
    for (char i = 'a', j = 'A'; i <= 'z' and j <= 'Z'; i++, j++)
    {
        m[i] = z;
        m[j] = z;
        z++;
    }
    string a, b;
    while (getline(cin, a), getline(cin, b))
    {
        int f = 0, s = 0;
        string aaa, bbb;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] >= 'A' and a[i] <= 'Z' or (a[i] >= 'a' and a[i] <= 'z'))
                aaa += a[i];
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] >= 'A' and b[i] <= 'Z' or (b[i] >= 'a' and b[i] <= 'z'))
                bbb += b[i];
        }
        a = aaa;
        b = bbb;

        for (int i = 0; i < a.size(); i++)
        {
            f += m[a[i]];
        }
        for (int i = 0; i < b.size(); i++)
        {
            s += m[b[i]];
        }
        int aa = 0, bb = 0;
        while (f)
        {
            aa += f % 10;
            f /= 10;
        }
        while (aa)
        {
            f += aa % 10;
            aa /= 10;
        }
        while (s)
        {
            bb += s % 10;
            s /= 10;
        }
        while (bb)
        {
            s += bb % 10;
            bb /= 10;
        }

        aa = min(f, s);
        bb = max(f, s);
        // cout << aa << " " << bb << nl;
        double ans = ((double)aa / (bb * 1.0)) * 100.00;
        cout << SP(2, ans) << " %" << nl;
    }
}