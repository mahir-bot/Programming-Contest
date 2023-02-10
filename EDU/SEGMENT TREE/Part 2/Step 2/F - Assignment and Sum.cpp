// #include <stdio.h>
// #include<algorithm>
// #include<vector>
// #include<math.h>
//#include <iostream>

#include <bits/stdc++.h>
using namespace std;
using u128 = __int128;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define ull unsigned ll int
#define EPS 0.00000001
#define MV 1e18
#define MX 1000000009
#define mod 1000000007
#define mx 1000006
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define mem(a, x) memset(a, x, sizeof(a))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define vii vector<int>
#define vll vector<ll>
#define vvl vector<vll>
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
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
#define nl '\n'
#define SP(x, y) fixed << setprecision((x)) << (y)
#define INF 0x3F3F3F3F
#define ff first
#define ss second
#define SZ(s) s.size()




int fx[] = {0, 1, 0, -1};
int fy[] = { -1, 0, 1, 0};
int tr[] = { -2, -2, -1, -1, 1, 1, 2, 2};
int tc[] = { -1, 1, -2, 2, -2, 2, -1, 1};



// typedef bool (*comp)(pii, pii);

//******************************** Template ***********************
template <class T>
inline T bitOn(T n, T pos)
{
    return n | ((T)1 << pos);
}
template <class T>
inline T bitOff(T n, T pos)
{
    return n & ~((T)1 << pos);
}
template <class T>
inline T isOn(T n, T pos)
{
    return (bool)(n & ((T)1 << pos));
}

template <class T>
istream &operator>>(istream &is, vector<T> &input)
{
    for (T &in : input)
    {
        is >> in;
    }
    return is;
}
template <class T> inline T bigmod(T p,T e,T M) {
    ll ret = 1;
    for (; e > 0; e >>= 1) {
        if (e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}

template <typename T>
T Hypot(T x,T y)
{
    return hypot(x,y);
}

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/Tree_policy.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;

// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key(?) : return count of values which is < ?
// find_by_order(?): access the ? index in set
//__builtin_popcount

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
int z = 1;
void loj()
{
    cout<<"Case "<<z++<<": ";
}
void sublime()
{
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif
}
///////////////////////////////////////////////////////////////////////////
//////////////////// DO NOT TOUCH BEFORE THIS LINE ////////////////////////
///////////////////////////////////////////////////////////////////////////


ll k = 2147483647;
ll v[mx];
ll Tree[mx * 4], lazy[mx * 4];
struct ST {

    ST()
    {
        memset(Tree, 0LL, sizeof(Tree));
        memset(lazy, -1, sizeof(lazy));
    }
    ll _modify(ll a, ll b,ll len)
    {
        return b*len;
    }

    void push(int node, int lx, int rx)
    {
        if (lx == rx) // node is the leaf
            return;

        int mid = (lx + rx) >> 1;
        lazy[node * 2] = _modify(lazy[node * 2],lazy[node],1);
        lazy[node * 2 + 1 ] = _modify(lazy[node * 2+1],lazy[node],1);
        Tree[node*2]= _modify(Tree[node*2],lazy[node],mid-lx+1);
        Tree[node*2+1]= _modify(Tree[node*2+1],lazy[node],rx-mid);
        lazy[node] = -1;
    }
    void init(int node, int b, int e)
    {
        if (b == e)
        {
            Tree[node] = 0;
            return;
        }

        int left = 2 * node;
        int right = 2 * node + 1;
        int mid = (b + e) / 2;
        init(left, b, mid);
        init(right, mid + 1, e);
        Tree[node] = (Tree[left] + Tree[right]);
    }

    ll query(int node, int lx, int rx, int l, int r)
    {
        if (lazy[node] != -1)
        {
            push(node, lx, rx);
        }

        if (lx > r or rx < l)
            return 0; //বাইরে চলে গিয়েছে

        if (lx >= l and r >= rx)
        {
            return Tree[node]; //রিলেভেন্ট সেগমেন্ট
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (lx + rx) / 2;

        ll leftQ = query(left, lx, mid, l, r);
        ll rightQ = query(right, mid + 1, rx, l, r);
        //   cout<<node<<" "<<leftQ<<" "<<rightQ<<nl;
        return (leftQ + rightQ); //বাম এবং ডান পাশের যোগফল
    }

    void update(int node, int lx, int rx, int l, int r, ll val)
    {

        if (lx > r or rx < l)
            return; //বাইরে চলে গিয়েছে
        if (lazy[node] != -1)
            push(node, lx, rx);
        if (lx >= l and rx <= r)
        {
            //  cout<<lx<<" "<<rx<<nl;
            Tree[node]= _modify(Tree[node],val,rx-lx+1);
            lazy[node]=_modify(lazy[node],val,1);
            return;
        }

        int left = node * 2; //আরো ভাঙতে হবে
        int right = node * 2 + 1;
        int mid = (lx + rx) / 2;
        update(left, lx, mid, l, r, val);
        update(right, mid + 1, rx, l, r, val);
        Tree[node] = (Tree[left] + Tree[right]);

    }
} st;

void solve()
{
    int a,b;
    cin>>a>>b;

    st.init(1,1,a);

    while (b--)
    {
        int x;
        cin>>x;
        if (x==1)
        {
            int l,r;
            ll w;
            cin>>l>>r>>w;
            l++;
            st.update(1,1,a,l,r,w);
        }
        else
        {
            int l,r;
            cin>>l>>r;
            l++;
            ll xx = st.query(1,1,a,l,r);
            cout<<xx<<nl;
        }
    }


}




int main()
{

    FIO;
    sublime();

    // int t;
    // cin >> t;
    // while (t--)
    // {

    //     solve();

    // }

    solve();


}



