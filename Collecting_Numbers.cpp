#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    set<int> s;
    int ans=n;
    for(int i=0; i<n; i++){
        int ai;cin >> ai;
        if(s.find(ai-1)!=s.end())ans--;
        s.insert(ai);

    }
    cout << ans << endl;
}