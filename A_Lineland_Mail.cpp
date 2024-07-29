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
    int n;
    cin >> n;int a[n]={};
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<"\n";
    for(int i=1;i<n-1;i++){
        cout<<min(a[i]-a[i-1],a[i+1]-a[i])<<" "<<max(a[n-1]-a[i],a[i]-a[0])<<"\n";

    }
    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0];
    

    return 0;
}