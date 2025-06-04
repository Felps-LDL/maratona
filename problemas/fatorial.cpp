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
 
ll fatorial[21], N, M;
 
int main()
{
    optimize;
    
    fatorial[0] = 1;
    fatorial[1] = 1;
 
    for (int i = 2; i < 21; i++) fatorial[i] = i * fatorial[i - 1];

    while(cin >> N >> M) cout << fatorial[N] + fatorial[M] << endl;
 
    return 0;
}
