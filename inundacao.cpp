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
#define MAXN 100
 
using namespace std;
 
int N, M;
char mapa[MAXN][MAXN];
 
void agua(int i, int j)
{
    mapa[i][j] = 'T';
    
    if (mapa[i - 1][j] == 'A') agua(i - 1, j);
     
    if (mapa[i][j - 1] == 'A') agua(i, j - 1);
 
    if (mapa[i][j + 1] == 'A') agua(i, j + 1);
 
    if (mapa[i + 1][j] == 'A') agua(i + 1, j);
}
 
int main()
{
    optimize;
 
    while (true)
    {
        cin >> N >> M;
        if (N == 0 & M == 0) return 0;
 
        for (int i = 2; i <= N + 1; i++)
        {
            for (int j = 2; j <= M + 1; j++) cin >> mapa[i][j];
        }
 
        for (int i = 2; i <= N + 1; i++)
        {
            for (int j = 2; j <= M + 1; j++) 
            {
                if (mapa[i][j] == 'T') agua(i, j);
            }
        }
 
        for (int i = 2; i <= N + 1; i++)
        {
            for (int j = 2; j <= M + 1; j++) cout << mapa[i][j];
            cout << endl;
        }
    }
 
    return 0;
}
