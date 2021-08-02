#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx INT_MAX
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
#define ull unsigned ll
const int INF = 0x3f3f3f3f;
using namespace std;
// freopen("data.txt", "r", stdin);
// freopen("dataOut.txt", "w", stdout);
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
    string s, ss;

    while (cin >> s)
    {
        if (s == "#")
        {
            break;
        }
        cin >> ss;

        int a = s.size();
        int b = ss.size();
        int arr[a + 1][b + 1];
        memset(arr, 0, sizeof arr);
        for (int i = 0; i <= a; i++)
        {
            for (int j = 0; j <= b; j++)
            {
                if (i == 0 || j == 0)
                {
                    arr[i][j] = 0;
                }
                else if (s[i - 1] == ss[j - 1])
                {
                    arr[i][j] = 1 + arr[i - 1][j - 1];
                }
                else
                {
                    arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
                }
            }
        }
        int val = arr[a][b];
        int x = (val * 15) + (val * 30);
        int fin = ((a * 15) + (b * 30)) - x;
        cout << fin << endl;
    }
}
