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
 
int N, maior = -1, mmc;
vector<int> nums;
bool ok = true;
 
bool testa()
{
    for (auto num : nums)
    {
        if (maior % num != 0) return false;
    }
 
    return true;
}
 
int main()
{
    optimize;
 
    cin >> N;
 
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
 
        if (x > maior) maior = x;
 
        nums.push_back(x);
    }
 
    mmc = maior;
    while(true)
    {
        ok = false;
        
        for (auto num : nums)
        {
            if (mmc % num != 0) 
            {
                ok = true;
                break;
            }
        }
        
        if (!ok) break;
        mmc += maior;
    }
 
    cout << mmc << endl;
 
    return 0;
}
