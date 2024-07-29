#include <bits/stdc++.h>
using namespace std; 
int lis(vector<int> &a){
    int n=a.size();
    int maxn=1;
    vector<int> dp(n);
    for(int i=0;i<n;i++){
        dp[i]=1;
        for(int j=0;j<n;j++){
            if(a[i]>a[j])dp[i]=max(dp[i],dp[j]+1);
        }
        maxn=max(maxn,dp[i]);
    }
    
    
    return  maxn;
}
int main(){
    vector<int> a={7,7,7,7,7,7,7};
    cout<<lis(a)<<"\n";

}