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
    string a,b;
    cin>>a>>b;
    int n=a.length(),m=b.length();
    if(n!=m)cout<<max(n,m);
    else{
        if(a==b)cout<<-1;
        else cout<<n;
    }

    return 0;
}