#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 1000000 + 10
#define vii vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vip vector<pair<int, int>>
#define vlp vector<pair<ll, ll>>
#define mii map<int, int>
#define mll map<ll, ll>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;

int main()
{
    int x, z = 1;
    cin >> x;
    while (x--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a <= 20 && b <= 20 && c <= 20)
        {
            cout << "Case " << z++ << ": "
                 << "good" << endl;
        }
        else
        {
            cout << "Case " << z++ << ": "
                 << "bad" << endl;
        }
    }
}