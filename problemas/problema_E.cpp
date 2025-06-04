#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<int,int>, int>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
 
using namespace std;

ll X = 1, Y, K;

ll gcd(ll a, ll b)
{
    return b == 0? a : gcd(b, a % b);
}

int main()
{
    optimize;

    cin >> Y >> K;

    while(K && X < Y)
    {
        K--;
        X += gcd(X, Y);
    }

    X += K * Y;

    cout << X << endl;
}

