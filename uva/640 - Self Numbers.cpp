#include <bits/stdc++.h>
//#define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1.0)
#define ll long long
#define EPS 1e-12
#define MV 1e18
#define mx 1000000 + 10
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
using namespace std;
/*freopen("data.txt","r",stdin);
	freopen("dataOut.txt","w",stdout);*/
///cout<<"Case "<<z++<<": "<<__<<endl;

int main()
{
	bool val[1000001] = {};
	for (int i = 1; i < 999999; i++)
	{
		int tot = i;
		int temp = i;
		while (temp)
		{
			tot += temp % 10;
			temp /= 10;
		}
		if (tot < 1000001)
		{
			val[tot] = true;
		}
	}
	for (int i = 1; i < 1000001; i++)
	{
		if (!val[i])
		{
			cout << i << endl;
		}
	}
}