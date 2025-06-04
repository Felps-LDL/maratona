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
string ans, temp;

int main()
{
    optimize;
    
    cin >> N;
    cin >> ans;

    for(int i = 0; i < N - 1; i++)
    {
        cin >> temp;

        for(int j = 0; j < temp.size(); j++)
        {
            if(temp[j] != '.') ans[j] = temp[j];
        }
    }

    cout << ans << endl;
    
    return 0;
}