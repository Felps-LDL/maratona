#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<int, int> 
#define piii pair<int, pair<int,int>>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MAXN 600
 
using namespace std;
 
int N, K;

vector<int> vetor(MAXN);
vector<bool> visitados(MAXN, false);
priority_queue<piii> fila;

void pareia()
{
    int maior1 = -INF, maior2 = -INF;
    int pos1 = -10, pos2 = -10;

    for (int i = 0; i < N; i++)
    {
        if (visitados[i]) continue;

        if (i == pos1 - 1 || i == pos1 || i == pos1 + 1) continue;

        if (vetor[i] > maior1) 
        {
            maior2 = maior1;
            pos2 = pos1;
            maior1 = vetor[i];
            pos1 = i;
        }
        else if (vetor[i] > maior2)
        {
            maior2 = vetor[i];
            pos2 = i;
        }
    }

    visitados[pos1] = true;
    visitados[pos2] = true;

    fila.push({vetor[pos1] + vetor[pos2], {pos1, pos2}});
}

int main()
{
    optimize;
 
    cin >> N >> K;

    int temp = N / 2;

    for (int i = 0; i < N; i++) cin >> vetor[i];

    while (temp--) pareia();

    cout << ceil(K * 1.0 / fila.top().f) * 2 << endl;
 
    return 0;
}
