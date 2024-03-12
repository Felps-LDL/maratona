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
#define MAXN 1000
 
using namespace std;
 
int L, C;
char matriz[MAXN][MAXN];
 
void goteira(int i, int j)
{
    matriz[i][j] = 'o';
 
    if (i == L - 1) return;
 
    if (matriz[i + 1][j] == '.') 
    {
        goteira(i + 1, j);
    }
    else if (matriz[i + 1][j] == '#')
    {
        if (j - 1 >= 0)
        {
            if (matriz[i][j - 1] == '.') goteira(i, j - 1);
        }
        
        if (j + 1 < C)
        {
            if (matriz[i][j + 1] == '.') goteira(i, j + 1);
        }
    }
}
 
int main()
{
    optimize;
 
    cin >> L >> C;
 
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++) cin >> matriz[i][j];
    }
 
    for (int i = 0; i < C; i++)
    {
        if (matriz[0][i] == 'o')
        {
            goteira(0, i);
            break;
        }
    }
 
    cout << endl << endl;
 
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++) cout << matriz[i][j];
        cout << endl;
    }
 
    return 0;
}
