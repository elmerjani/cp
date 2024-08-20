#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int a[n];
        vector<int> freq(n+1,0);
        for(int i=0; i<n; i++){
            cin >> a[i];
            freq[a[i]]++;

        }
        int ans=0;
        for(int i=0; i<n; i++){
            int sum=a[i];
            for(int j=i+1; j<n; j++){
                sum+=a[j];
                if(sum>n)break;
                ans+=freq[sum];
                freq[sum]=0;
            }
        }
        cout << ans << endl;


        
    }
    
}