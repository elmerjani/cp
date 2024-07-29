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



int main()
{
    fastio();
    int n;
    cin >> n;
    int a[n]={};
    for(int i = 0; i < n; i++){
        cin >> a[i];

    }
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        cout << a[i]<<" ";
    }

    return 0;
}