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

int N;
string s1, s2;

int main()
{
    optimize;
    
    int isolado = 0, ambiente = 0;
    cin >> N;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == '*') isolado++;
        if(s2[i] == '*') ambiente++;
    }
    
    cout << fixed << setprecision(2);
    cout << 1.0 * (isolado - ambiente) / isolado << endl;
    return 0;
}