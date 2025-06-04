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

int N, W, L, Tx, Ty;

int main()
{
    optimize;
    
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> W >> L >> Tx >> Ty;

        if(Tx > W || Ty > L)
        {
            cout << "0" << endl;
            continue;
        }

        int ans = 0;

        if(Tx + Ty <= W) ans = max(ans, Tx + Ty);
        if(Tx + (L - Ty) <= W) ans = max(ans, Tx + (L - Ty));
        if((W - Tx) + Ty <= W) ans = max(ans, (W - Tx) + Ty);
        if((W - Tx) + (L - Ty) <= W) ans = max(ans, (W - Tx) + (L - Ty));

        cout << ans << endl;
    }
    
    return 0;
}