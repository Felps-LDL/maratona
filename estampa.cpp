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
#define MAXN 10000;
 
using namespace std;
 
int N;
 
int main()
{
    optimize;
 
    cin >> N;
    vector<int> nums(N);
 
    for (int i = 0; i < N; i++) cin >> nums[i];
    
    for (int i = 0; i < N; i++)
    {
        if (nums[i] == -1) 
        {
            int cont = 1;
 
            while(true)
            {
                if (i + cont < N)
                {
                    if (nums[i + cont] == 0)
                    { 
                        nums[i] = cont;
                        break;
                    }
                }
                
                if (i - cont >= 0)
                {
                    if (nums[i - cont] == 0)
                    {
                        nums[i] = cont;
                        break;
                    }
                }
 
                cont++;
            }
        }
    }
 
    for (int i = 0; i < N - 1; i++) cout << nums[i] << " ";
    cout << nums[N - 1] << endl;
 
    return 0;
}
