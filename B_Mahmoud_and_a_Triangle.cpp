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
    cin >> n;
    int a[n]={};
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool can=false;
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        if(a[i]+a[i+1]>a[i+2]){
            cout<<"YES";
            can=true;
            break;

        }
        
    }
    if(!can)cout<<"NO";

    return 0;
}