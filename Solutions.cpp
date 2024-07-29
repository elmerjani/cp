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
    vector<int> odds;
    vector<int> evens;
    for (ll i = 1; i <= t; i++)
    {
        int ai;cin>>ai;
        if(ai%2==0)evens.push_back(ai);
        else odds.push_back(ai);
        
    }
    if(odds.size()==0)cout<<odds[0];
    else cout<<evens[0];

    return 0;
}