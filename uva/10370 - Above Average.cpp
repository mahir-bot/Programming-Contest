#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define mx 2000
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
using namespace std;
///cout<<"Case "<<z++<<": "<<__<<endl;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int y, sum = 0, cnt = 0;
        cin >> y;
        int arr[y + 1];
        for (int i = 0; i < y; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        double val = (double)sum / (double)y;
        for (int i = 0; i < y; i++)
        {
            if (val < arr[i])
            {
                cnt++;
            }
        }
        double ans = cnt / (double)y * 100;
        cout << fixed << setprecision(3) << ans << "%" << endl;
    }
}