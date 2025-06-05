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

/*
    21 + 21 + 33 + 77 = 152
*/

vector<ll> v, prefix_sum(1, 0);

int main()
{
    optimize;

    ll total = 0;
    ll N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        prefix_sum.push_back(x + prefix_sum.back());
    }

    for(int i = 0; i < N; i++) prefix_sum.push_back(prefix_sum.back() - v[i]);

    for(int i = 0; i < N; i++) total += v[i] * prefix_sum[N + i + 1];

    
    cout << total << endl;

    return 0;
}