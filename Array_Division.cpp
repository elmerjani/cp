#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n>>k;
    int log[n+1];
    log[1]=0;
    for(int i=2; i<=n; i++)log[i]=log[i/2]+1;
    ll st[n][log[n]+1];
    ll a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        st[i][0]=a[i];
    }
    for(int i=1; i<=log[n]; i++){
        for(int j=0;j<=n-(1<<i); j++){
            st[j][i]=st[j][i-1]+st[j+(1<<(i-1))][i-1];
        }

    }
    ll ans=0;
    int t=n-k+1;
    
}

