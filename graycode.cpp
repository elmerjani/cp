#include <bits/stdc++.h>
using namespace std;
bool rowsame(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[0])return false;
    }
    return true;
}
bool colsame(string grid[],int n,int j){
    for(int i=0;i<n;i++){
        if(grid[i][j]!=grid[0][j])return false;

    }
    return true;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n>>m;
        string grid[n];
        for(int i=0 ; i<n ; i++){
            cin>>grid[i]; 
        }
        if(n==1&& m==1){
            cout<<"YES";
        }
        else {
            if(n==1){
                if(grid[0][0]==grid[0][m-1])cout<<"YES";
                else cout<<"NO";
            }
            else if(m==1){
                if(grid[0][0]==grid[n-1][0])cout<<"YES";
                else cout<<"NO";

            }
            else{
                if(rowsame(grid[0])&& rowsame(grid[n-1])){
                    if(grid[0][0]==grid[n-1][0])cout<<"YES";
                    else cout<<"NO";

                }
                else if(rowsame(grid[0])|| rowsame(grid[n-1])){
                    cout<<"YES";

                }
                else{
                    if(colsame(grid,n,0)&&colsame(grid,n,m-1)){
                        if(grid[0][0]==grid[0][m-1])cout<<"YES";
                        else cout<<"NO";
                    }
                    else{
                       cout<<"YES";

                    }
                }
                    
                        
                    
                }
                

                }
                cout<<"\n";
                
    }
}

    
