#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD=1e9+7; 
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<int,ll> ones_zeros;
        int n=s.size();
        ll count=0;
        int ones=0,zeros=0;
        for(int i=1;i<=n;i++){
            if(s[i-1]=='0')zeros++;
            else ones++;
            if(ones==zeros)count+=(n-i+1);
            count%=MOD;
            count+=(ones_zeros[ones-zeros])*(n-i+1);
            count%=MOD;
            ones_zeros[ones-zeros]+=(i+1);
        }
        cout<<count<<"\n";
        
    }


}