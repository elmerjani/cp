#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    if(n<4){
        cout<<-1<<"\n";
        return ;
    }
    int maxOdd=n%2==0 ?n-1  :n;
    for(int i=maxOdd; i>=1;i-=2)cout<<i<<" ";
    cout<<4<<" "<<2<<" ";
    for(int i=6;i<=n;i+=2)cout<<i<<" ";
    cout<<"\n";
}
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}