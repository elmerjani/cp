#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;cin >> n >> m;
    vector<int> freq(m,0);
    vector<vector<char>> s(n,vector<char>(m));
    for(int i=0;i<n;i++){
      string str;cin >> str;
      for(int j=0;j<m;j++)s[i][j]=str[j];

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]=='*'){
                freq[j]++;   
                s[i][j]='.'; 
            }
            else if(s[i][j]=='o'){
                for(int k=1;k<=freq[j];k++){
                    s[i-k][j]='*';
                }
                freq[j]=0;
            }
        }
    }
    for(int j=0;j<m;j++){
        for(int k=1;k<=freq[j];k++){
            s[n-k][j]='*';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cout<<s[i][j];
        cout<<"\n";
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}