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
#define pqi priority_queue<int>
#define pql priority_queue<ll>
#define pb push_back
#define mp make_pair
#define ull unsigned ll
using namespace std;
const regex pattern("^0+(?!$)");
//string s = bitset<32>(int).to_string();
// cout << "Case " << z++ << ": " << "__" << endl;
/* 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
*/

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        string s;
        cin >> s;
        int o = 0, z = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                o++;
            else
                z++;
        }
        int ans;
        if (o == s.size())
        {
            ans = 1;
        }
        else if (z == s.size())
            ans = 0;
        else
            ans = 10;
        for (int i = 0; i < s.size(); i++)
            cout << ans;
        cout << endl;
    }
}