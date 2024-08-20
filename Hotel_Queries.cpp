#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin >> n >> m;
    set<pair<int,int>> s;
    for(int i=0;i<n;i++){
        int hi;cin >> hi ;
        s.insert({hi,i+1});
    }
    while(m--){
        for(auto  it=s.begin();it!=s.end();it++){
            cout<<"("<<(*it).first<<","<<(*it).second<<")"<<" ";
        
        }
        
        int ri;cin >> ri;
        auto it=s.lower_bound({ri,0});
        if(it==s.end()){
            cout<<0<<"\n";
            continue;
        }
        cout<<(*it).second<<"\n";
        s.insert({(*it).first-ri,(*it).second});
        s.erase(it);
        
    }
}