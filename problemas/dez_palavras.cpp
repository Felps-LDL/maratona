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

int T, N, a, b;

int main()
{
    optimize;
    
    cin >> T;

    while(T--)
    {
        cin >> N;
        int maior = -INF, index = -1;

        for(int i = 1; i <= N; i++)
        {
            cin >> a >> b;

            if(a > 10) continue;

            if(b > maior)
            {
                maior = b;
                index = i;
            }
        }

        cout << index << endl;
    }
    
    return 0;
}