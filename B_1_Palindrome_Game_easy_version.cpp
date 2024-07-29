#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin >>t;
    while(t--){
        int n;
        string s;
        cin >> n>>s;
        int count0=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')count0++;
        }
        if(count0%2==0)cout<<"BOB"<<"\n";
        else{
            if(count0==1)cout<<"BOB"<<"\n";
            else cout<<"ALICE"<<"\n";
        }

    }

    return 0;
}