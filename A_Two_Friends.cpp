#include <bits/stdc++.h>
using namespace std;
void dfs(int n,vector<bool>& visited,int& counter,int& mincounter,int p[]){
    if(visited[n]){
        if(counter<mincounter)mincounter=counter;
        counter=0;
    }
    else{
        counter++;
        visited[n]=true;
        dfs(p[n],visited,counter,mincounter,p);
    }

}
    


int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int p[n+1]={};
        for(int i=1; i<=n; i++)cin >> p[i];
        int counter=0,mincounter=n;
        vector<bool> visited(n+1,false);
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                dfs(i,visited,counter,mincounter,p);
            }
        }
        cout << min(mincounter,3)<<'\n';

    }
    return 0;
}