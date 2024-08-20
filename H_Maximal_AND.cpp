#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> count(32,0);
    for(int i=0; i<n;i++){
        ll ai;cin >> ai;
        int j=0;
        while(ai>0){
           count[j]+=ai%2;
           ai/=2;
           j++;
        }
    }
    vector<int> bits(32,0);
    for(int i=31;i>=0 ;i--){
      if(n==count[i]) {
        bits[i]=1;
        continue;
      }
      if(i>30 )continue;
      if(k>=n-count[i]){
        bits[i]=1;
        k-=(n-count[i]);
      }
    
    }
    ll ans =0;
    for(int j=0;j<32;j++){
        if(bits[j]==1)ans+=(1<<j);

    }
    cout<<ans<<"\n";
        
}
//we can have 31 bits set 
int main(){
    
    int t;cin>>t;
    while(t--){
        solve();
    }
}