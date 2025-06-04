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

int x0, y_0, x1, y_1;

string solution();

int main()
{
    optimize;

    cin >> x0 >> y_0 >> x1 >> y_1;

    cout << solution() << endl;

    return 0;
}

string solution()
{
    double dist0 = sqrt(pow(x0, 2) + pow(y_0, 2));
    double dist1 = sqrt(pow(x1, 2) + pow(y_1, 2));

    return dist0 == dist1? "Empate" : (dist0 < dist1? "Russo" : "Wil");
}