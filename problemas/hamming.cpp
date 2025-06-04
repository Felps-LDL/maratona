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
 
int N, M;
 
ll hamming(string a, string b)
{
    ll dif = 0, tam = min(a.size(), b.size());
 
    for (int i = 0; i < tam; i++)
    {
        if (a[i] != b[i]) dif++;
    }
 
    return dif + max(a.size(), b.size()) - tam;
}
 
string binario(int x)
{
    string bin = "";
 
    while(x)
    {
        bin += x % 2 + '0';
        x /= 2;
    }
 
    return bin;
}
 
int main()
{
    optimize;
 
    while (true)
    {
        cin >> N >> M;
        if (N == 0 && M == 0) return 0;
 
        cout << hamming(binario(N), binario(M)) << endl;
    }
 
    return 0;
}
