#include <bits/stdc++.h>
using namespace std;
const string str ="abcdefghijklmnopqrstuvwxyz";
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin>>s;
        int n=s.length();
        bool used=false;
        for(int i=0; i<n; i++){
            if(i==0 || s[i]!=s[i-1]){
                cout<<s[i];
            }
            else {
                if(used){
                    cout<<s[i];
                    continue;
                    }
                used=true;
                for(int j=0;j<26;j++){
                    if(s[i]!=str[j]){
                        cout<<str[j]<<s[i];
                        break;
                    }
                }
            }
        }
        if(!used){
            for(int i=0; i<26; i++){
                if(s[n-1]!=str[i]){
                        cout<<str[i];
                        break;
                    }
            }
        }
        cout<<"\n";

    }
}