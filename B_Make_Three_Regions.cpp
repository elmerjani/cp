#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int count=0;
        for(int i=1;i<n-1;i++){
            if(s1[i]=='.'&& s2[i]=='.'){
                if((s1[i-1]=='x'&& s1[i+1]=='x' && s2[i-1]=='.' &&s2[i+1]=='.')||(s2[i-1]=='x'&& s2[i+1]=='x' && s1[i-1]=='.' &&s1[i+1]=='.'))count++;
            }
        
        }
        cout<<count<<"\n";
    }
}