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

int T, N, K;
string S;

int main()
{
    optimize;
    
    cin >> T;

    while(T--)
    {
        cin >> N >> K >> S;
        
        int ans = 0;

        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == 'B')
            {
                i += K - 1;
                ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}