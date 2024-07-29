#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MAXN=1e6;
const ll MOD=1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<ll>>  dp(MAXN+1,vector<ll>(8,0));
    for(int i=0;i<8;i++)dp[1][i]=1;
    for(int i=2;i<=MAXN;i++){
        for(int j=0;j<8;j++){
            if(j==0||j==2||j==3||j==4||j==5){
                dp[i][j]=(dp[i-1][0]+
                        dp[i-1][1]+
                        dp[i-1][3]+
                        dp[i-1][4]+
                        dp[i-1][5])%MOD;
                    
                
            }
            else {
                dp[i][j]=(dp[i-1][2]+
                        dp[i-1][6]+
                        dp[i-1][7])%MOD;
                
            }
        }
    }
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==1){
            cout<<2<<"\n";
            continue;
        }
        n--;
        ll ans=0;
        for(int i=0;i<8;i++)ans=(ans+dp[n][i])%MOD;
        cout<<ans<<"\n";
        
    }
    
    
    
    
}
//ai =k*q+r avec 0<=r<k
// ai+k-r=(k+1)*q
