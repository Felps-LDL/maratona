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

int a, b, c, ans = 0;

int main()
{
    optimize;
    
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++)
    {
        if(c % i == 0) ans++;
    }    

    cout << ans << endl;
    
    return 0;
}
