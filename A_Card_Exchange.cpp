#include <bits/stdc++.h>
using namespace std;

    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  t;cin >> t;
    while(t--) {
        int n,k;cin >> n>>k;
        vector<int> freq(101,0);
        for(int i=0; i<n; i++){
            int ci;cin >> ci;
            freq[ci]++;
        }
        bool can=true;
        for(int i=1;i<=100;i++){
            if(freq[i]>=k){
                can=false;
                cout<<k-1<<"\n";
                break;
            }
        }
        if(can)cout<<n<<"\n";

    }
    return 0;
}