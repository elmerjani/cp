#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)return ans;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            pair<TreeNode*,int> p=q.front();
            q.pop();
            TreeNode node =*p.first;
            int depth=p.second;
            ans[depth].push_back(node.val);
            if(node.left!=nullptr)q.push({node.left,depth+1});
            if(node.right!=nullptr)q.push({node.left,depth+1});

        }
        return ans;
        
    }
};
const ll MOD=1337;
ll binpow(ll a,ll b,ll mod){
    if(b==0)return 1;
    ll tmp=binpow(a,b/2,mod);
    if(b%2==0)return (tmp*tmp)%mod;
    return ((a*tmp)%mod*tmp)%mod;
}
int superpower(int a,vector<int> &b){
    if(a==1)return 1;
    if(a%MOD==0)return 0;
    int n=b.size();
    vector<ll> mod(n);
    mod[0]=1;
    for(int i=1;i<n;i++){
        mod[i]=(mod[i-1]*10)%1336;
    }
    ll x=0;
    for(int i=0;i<n;i++){
        x=(x+b[n-1-i]*mod[i])%1336;
    }
    return (int)binpow((ll)a,x,MOD);


}
int main(){
    int a=2;
    vector<int> b={10};
    cout<<superpower(a,b)<<"\n";
    return 0;

}