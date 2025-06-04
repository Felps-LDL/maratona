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

/*

25 = ...00011001
   = ...00010001
   = ...00010101

   adicionar de forma gulosa nos cantos
   10001 -> 11011 que é maior que 11001 logo não é permitido
   10001 -> 10101 que é menor que 11001 logo é permitido e é o maior binário palíndromo menor que 25
   resposta = 10101 = 21

   se for potência de 2 tipo 10000 então a resposta é 10000 - 1 = 01111
*/

ll sol(ll x)
{
    if(x == 1) return 1;

    int pos;
    
    for(pos = 0; (1LL << (pos + 1)) <= x; pos++);
    
    if(x == (1LL << pos)) return x - 1;

    ll resp = (1LL << pos) + 1, inc;

    for(int i = pos - 1; i >= pos - i; i--)
    {
        inc = (1LL << i);

        if(i > pos - i) inc += (1LL << (pos - i));

        if(resp + inc <= x) resp += inc;
    }

    return resp;
}

int main()
{
    optimize;
    
    ll x;
    cin >> x;

    cout << sol(x) << endl;

    return 0;
}