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
 
int x_1, x_2, y_1, y_2;
 
int modu(int a, int b)
{
    if (a - b >= 0) return (a - b);
    else return b - a;
}
 
int main()
{
    optimize;
 
    cin >> x_1 >> y_1 >> x_2 >> y_2;
 
    cout << modu(x_1, x_2) + modu(y_1, y_2) << endl;
 
    return 0;
}
