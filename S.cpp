

#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
const ll MOD=1e9+7;

ll binpow(ll a, ll b ,ll mod){
    ll ans= 1;
    while(b>0){
        if(b%2){
            ans *=a;
            ans%=mod;
        }
        a*=a;
        a%=mod;
        b/=2;
    }
    return ans;
}
int main(){
    int t;cin >> t;
    while(t--){
        ll a, b;cin >> a >> b;
        cout<<binpow(a,b,MOD)<<"\n";
    }
}