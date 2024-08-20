#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> tree;
void update(ll ans,int k){
    while(k>0){
        tree[k]+=ans;
        k/=2;
    }
 
 
}
ll f(int node,int left,int right,int low,int high){
    if(left>=low && right<=high)return tree[node];
    if(right<low || left>high)return 0;
    int next=(left+right)/2;
    return f(2*node,left,next,low,high)+f(2*node+1,next+1,right,low,high);
 
}
void update1(int node ,int left,int right,int low,int high,ll val){
  if(left>=low && right<=high){
    tree[node]+=((high-low+1)*val);
    return ;
  }
  if(right<low || left>high)return ;
  int next=(left+right)/2;
  update1(2*node,left,next,low,high,val);
  update1(2*node+1,next+1,right,low,high,val);


}
int main(){
    int n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    while(__builtin_popcount(n)!=1){
        n++;
        a.push_back(0);
    }
    tree.resize(2*n);
    for(int i=n;i<2*n;i++){
        tree[i]=a[i-n];
    }
    for(int i=n-1;i>0;i--){
        tree[i]=tree[2*i]+tree[2*i+1];
    }

    while(q--){
        int type;cin>>type;
        if(type==1){

            int low,high;
            ll val;
            cin>>low>>high>>val;
            low--;high--;
            update1(1,0,n-1,low,high,val);
            
 
        }
        else{
            int k;cin>>k;
            k--;
            cout<<tree[n+k-1]<<"\n";
 
        }
        
    }
}