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

string solution(string S);

int main()
{
    optimize;

    string S;
    getline(cin, S);

    cout << solution(S) << endl;

    return 0;
}

string solution(string S)
{
    if(S[S.size() - 1] == '?') return "7";

    for(int i = 0; i < S.size(); i++)
    {
        if(S[i] == 'S' && (i + 4 < S.size()))
        {
            if(i > 0 && S[i - 1] && (tolower(S[i - 1]) >= 'a' && tolower(S[i - 1]) <= 'z')) continue;
            if(i + 5 < S.size() && (tolower(S[i + 5]) >= 'a' && tolower(S[i + 5]) <= 'z')) continue;
            if(S.substr(i, 5) == "Sussu") return "AI SUSSU!";
        }
    }

    return "O cara é bom!";
}