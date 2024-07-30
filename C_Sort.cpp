#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        string a,b;cin>>a>>b;
        vector<vector<int> > freqa(n+1,vector<int>(26,0));
        vector<vector<int> > freqb(n+1,vector<int>(26,0));
        for(int i=1;i<=n;i++){
            freqa[i]=freqa[i-1];
            freqa[i][a[i-1]-'a']=freqa[i][a[i-1]-'a']+1;
            freqb[i]=freqb[i-1];
            freqb[i][b[i-1]-'a']=freqb[i][b[i-1]-'a']+1;
        }
        while(q--){
            int l,r;cin>>l>>r;
            int count=0;
            for(int i=0;i<26;i++){
                count+=abs(freqa[r][i]-freqa[l-1][i]-(freqb[r][i]-freqb[l-1][i]));
            }
            cout<<count/2<<"\n";
        }
        
        
    }


}