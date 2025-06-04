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

int N, M, temp, maior = -1, indice = -1;

int main()
{
    optimize;

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        cin >> temp;

        int qtd = temp / M;
        if(temp % M != 0) qtd++;

        if(qtd >= maior)
        {
            maior = qtd;
            indice = i;
        } 
    }

    cout << indice + 1 << endl;

    return 0;
}