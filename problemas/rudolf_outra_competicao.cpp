#include <bits/stdc++.h>
#define optimize ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << "x = " << x << endl;
#define ll long long
#define pii pair<ll, ll> 
#define piii pair<ll, pair<ll,ll>>
#define ALL(x) x.begin(), x.end()
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fll
 
using namespace std;

ll T, N, M, H;

int main()
{
    optimize;
    
    cin >> T;

    while(T--)
    {
        cin >> N >> M >> H;
        priority_queue<piii> pq;

        for(int i = 0; i < N; i++)
        {
            ll pontos = 0, penalidade = 0, temp = H;
            bool ok = true;

            for(int j = 0; j < M; j++)
            {
                ll x;
                cin >> x;

                if(x <= temp && ok)
                {
                    pontos++;
                    penalidade += penalidade + x;
                    temp -= x;
                }
                else ok = false;
            }

            pq.push({pontos, {i + 1, penalidade}});
        }

        ll ganhador = pq.top().s.f, pontuacao = pq.top().f;
        pq.pop();

        if(!pq.empty() && pq.top().f != pontuacao)
        {
            ll pos = 1;
            while(ganhador != 1) 
            {
                ganhador = pq.top().s.f;
                pos++;
                pq.pop();
                if(ganhador == 1) break;
            }
            cout << pos << endl;
        }

        priority_queue<pii, vector<pii>, greater<pii>> pq2;

        pq2.push({pq.top().s.s, ganhador});

        while(!pq.empty() && pq.top().f == pontuacao) 
        {
            pq2.push({pq.top().s.s, pq.top().s.f});
            pq.pop();
        }

        cout << pq2.top().s << endl;
    }
    
    return 0;
}