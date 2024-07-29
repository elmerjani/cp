#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
    ll tc;     \
    cin >> tc; \
    while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{

}

int main()
{
    fastio();
    ll t;
    cin >> t;       
    vector<pair<int,int>> odds;
    vector<pair<int,int>> evens;
    for (ll i = 1; i <= t; i++)
    {
        int ai;cin>>ai;
        if(ai%2==0)evens.push_back({ai,i});
        else odds.push_back({ai,i});
        
    }
    if(odds.size()==1)cout<<odds[0].second;
    else cout<<evens[0].second;

    return 0;
}