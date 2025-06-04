#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<pair<ll,ll>, ll>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
 
using namespace std;

ll N;
vector<piii> circulos;
vector<bool> vis(5010, false);

int main()
{
    optimize;

    cin >> N;

    while(N--)
    {
        char q;
        ll x, y, r;
        cin >> q >> x >> y >> r;

        if(q == 'R')
        {
            bool ok = false;

            for(int i = 0; i < circulos.size(); i++)
            {
                if(vis[i]) continue;

                if(circulos[i].f.f == x && circulos[i].f.s == y && circulos[i].s == r)
                {
                    ok = true;
                    vis[i] = true;
                    break;
                }
            }

            ok? cout << "Ok" << endl : cout << "No" << endl;
        }
        else if(q == 'A')
        {
            bool ok = true;

            for(int i = 0; i < circulos.size(); i++)
            {
                if(vis[i]) continue;

                ll dx = circulos[i].f.f - x;
                ll dy = circulos[i].f.s - y;
                ll dr = circulos[i].s + r;

                if(dr * dr > dx * dx + dy * dy)
                {
                    ok = false;
                    break;
                }
            }

            if(ok) circulos.push_back({{x, y}, r});

            ok? cout << "Ok" << endl : cout << "No" << endl;
        }
    }

    return 0;
}