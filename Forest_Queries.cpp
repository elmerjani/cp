#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q;cin >> n >> q;
    vector<int> column(n+1,0);
    vector<vector<int> > prefix_sum(n+1,vector<int>(n+1,0));
    vector<vector<char>> forest(n,vector<char>(n));
    for(int i=0; i<n; i++){
        string s;cin >> s;
        for(int j=0; j<n; j++){
            forest[i][j]=s[j];

        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(forest[i-1][j-1]=='*'){
                column[j]++;
            }
            prefix_sum[i][j]=prefix_sum[i][j-1]+column[j];
        }
    }
    while(q--){
        int y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;
        cout<<prefix_sum[y2][x2]-prefix_sum[y1-1][x2]-prefix_sum[y2][x1-1]+prefix_sum[y1-1][x1-1]<<"\n";
    }
}