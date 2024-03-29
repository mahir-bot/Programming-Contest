#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace __gnu_cxx;
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
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define djk priority_queue<pll, vlp, greater<pll>>
#define pb push_back
#define mp make_pair
const int INF = INT_MAX;
int fx[] = {+1, -1, +0, +0};
int fy[] = {+0, +0, +1, -1};
using namespace std;

// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

typedef bool (*comp)(pii, pii);

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        ll y;
        cin >> y;
        string as = "Ashishgup";
        string fs = "FastestFinger";
        bool a = 0;
        if (y == 1)
        {
            a = 0;
        }
        else if (y == 2)
        {
            a = 1;
        }
        else if (y % 2 == 1)
        {
            a = 1;
        }
        else
        {
            float f = log2(y);
            if (f - floor(f) == 0)
            {
                a = 0;
            }
            else if (y % 4 == 0)
            {
                a = 1;
            }
            else
            {
                int k = 3;
                while (k * k <= y && !a)
                {
                    if (y % k == 0)
                    {
                        a = 1;
                    }
                    k++;
                }
            }
        }
        if (!a)
        {
            cout << fs << endl;
        }
        else
        {
            cout << as << endl;
        }
    }
}