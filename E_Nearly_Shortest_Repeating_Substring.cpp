#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        string s;
        cin >> s;
        for(int x=1;x<=n;x++){
            if(n%x==0){
                int k=n/x;
                string prefix="",suffix="";
                for(int i=0;i<x;i++){
                    prefix +=s[i];
                }
                for(int i=n-1;i>=n-x;i--)suffix=s[i]+suffix;
                string pre="",suf="";
                for(int i=0;i<k;i++){
                    pre +=prefix;
                    suf +=suffix;
                }
                //cout<<pre.size()<<" "<<suf.size()<<" ";
                int prefixDiff=0,suffixDiff=0;
                for(int i=0;i<n;i++){
                    if(pre[i]!=s[i])prefixDiff++;
                    if(suf[i]!=s[i])suffixDiff++;

                }
                if(prefixDiff<=1 || suffixDiff<=1){
                    cout<<x<<"\n";
                    break;
                }

            }
        }
    }
}