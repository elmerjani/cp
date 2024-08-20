#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin >> n >> m;
    vector<int> positions(n+2);
    vector<int> a(n+2);
    a[0]=0;
    a[n+1]=n+1;
    positions[0] =0;
    positions[n+1]=n+1;

    for(int i=1;i<=n;i++){
        int ai;cin >> ai;
        a[i]=ai;
        positions[ai]=i;
    }
    int ans=1;
    for(int i=0;i<=n;i++){
        if(positions[i]>positions[i+1])ans++;

    }
    // cout<<ans<<endl;
    while(m--){
        int l,r;
        cin >> l >> r;
        set<pair<int,int>> s;
        s.insert({a[l],a[l]+1});
        s.insert({a[l]-1,a[l]});
        s.insert({a[r]-1,a[r]});
        s.insert({a[r],a[r]+1});
        for(auto p:s){
            if(positions[p.first]>positions[p.second])ans--;
        }
        positions[a[l]]=r;
        positions[a[r]]=l;
        int tmp=a[l];
        a[l]=a[r];
        a[r]=tmp;
        for(auto p:s){
            if(positions[p.first]>positions[p.second])ans++;
        }
        cout<<ans<<"\n";
    }


}


