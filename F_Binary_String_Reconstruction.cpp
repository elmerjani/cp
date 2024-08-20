#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n0,n1,n2;cin >> n0 >> n1 >> n2;
        if(n1==0){
            if(n0==0){
                for(int i=0;i<n2+1;i++)cout<<1;
                cout<<"\n";
            }
            else {
                for(int i=0;i<n0+1;i++)cout<<0;
                cout<<"\n";
            }
            continue;
        }
        for(int i=0;i<n2+1;i++)cout<<1;
        for(int i=0;i<n0+1;i++)cout<<0;
        for(int i=0;i<n1-1;i++){
            if(i%2==0)cout<<1;
            else cout<<0;
        }
        cout<<"\n";

    }
}