#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxn =1e7;
void solve (){
    ll n,k;cin >> n>>k;
    ll a[n];
    for(int i = 0; i < n;i++)cin >> a[i];
    ll left=1, right=maxn;
    
    while(left<right){//yes yes no 
    
        ll mid=left+(right-left+1)/2;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(a[i]<mid)sum+=(mid-a[i]);
        }
        if(sum<=k){
            left=mid;
            
        }
        else right=mid-1;
    }
   
    
    ll ans =(left-1)*n+1;
    for(int i=0;i<n;i++){
        if(a[i]<left){
            
            k-=(left-a[i]);
            a[i]=left;
        }
    }
    int count=0 ;
    for(int i=0;i<n;i++){
        if(a[i]>left){
            count ++;
            continue;
        }

        if(k<=0)break;
        k--;
        count ++;
    }
    cout<<ans+(count>0?count+1:0)<<"\n";
    
    
}
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}
//1 2 ... n 1 2 3 ... n-1
// k k-1 
// 1 2 3... n 1 2 ... k
//k+1
// 1 2 3... n 1 2 3 ...n-1 n I have n+1
// I have 2 for each i so I have n+1 
// I have 3 for each i so I have 2n+1
//I have k for each one so i have (k-1)n+1 
// search for the greatest k sush as for each i K have a[i]>=k