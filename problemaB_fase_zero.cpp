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
#define MAXN 10000

using namespace std;

int N, M, K;
int horas = 0;
int u, v, c;
vector<int> cidades;
vector<pii> caminhos[MAXN];
vector<bool> visitados(MAXN, false);

int main()
{
    optimize;

    cin >> N >> M >> K;
    cidades.push_back(1);
    visitados[1] = true;

    for (int i = 0; i < M; i++)
    {
        cin >> u >> v >> c;

        caminhos[u].push_back({v, c});
        caminhos[v].push_back({u, c});
    }

    for (int i = 0; i < K - 1; i++)
    {
        priority_queue<pii, vector<pii>, greater<pii>> fila;

        for (auto cidade : cidades)
        {
            for (auto vizinho : caminhos[cidade])
            {
                if (visitados[vizinho.f]) continue;
                int custo = vizinho.s - horas;
                if (custo < 0) custo = 0;

                fila.push({custo, vizinho.f});
            }
        }

        cidades.push_back(fila.top().s);
        visitados[fila.top().s] = true;
        horas += fila.top().f;
    }

    cout << horas << endl;

    return 0;
}
