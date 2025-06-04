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
#define MAXN 100000

using namespace std;

vector<bool> visitados(4, false);
int a, b, c;

int main()
{
    optimize;

    cin >> a >> b >> c;

    visitados[a] = true;
    visitados[b] = true;
    visitados[c] = true;

    for (int i = 1; i <= 3; i++)
    {
        if (!visitados[i]) cout << i << endl;
    }
    
    return 0;
}
