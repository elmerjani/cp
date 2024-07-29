#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int log[n+1];
    log[1]=0;
    for(int i=2; i<=n; i++)log[i]=log[i/2]+1;
    int st[n][log[n]+1];
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        st[i][0]=a[i];
    }
    for(int i=1; i<=log[n]; i++){
        for(int j=0;j<=n-(1<<i); j++){
            st[j][i]=gcd(st[j][i-1],st[j+(1<<(i-1))][i-1]);
        }

    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int length=j-i+1;
            int l=log[length];
            mp[gcd(st[i][l],st[j-(1<<l)+1][l])]++;

        }
    }

    int q;cin >> q;
    while(q--){
        int xi;cin>>xi;
        cout<<mp[xi]<<"\n";
    }
    return 0;
}

