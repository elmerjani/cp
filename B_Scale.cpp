#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<string > grid(n);
        for(int i=0;i<n;i++){
                cin>>grid[i];
            
        }
        int m=n/k;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                cout<<(grid[i*k][j*k]);
            }
            cout<<"\n";
        }
        
    }


}