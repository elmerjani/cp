#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        
        ll n,x;cin>>n>>x;
        ll count=0;
        for(ll a=1;a<=n;a++){
            for(ll b=1;b<=n/a;b++){
                
                    if(x-a-b>0)count+=min(x-a-b,(n-a*b)/(a+b));
                    else break;
                
            }
        }
        cout<<count<<"\n";
        
        
    }


}