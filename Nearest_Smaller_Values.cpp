#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> n_s_p(int n,vector<int>& nums){
  stack<int> stk;
  vector<int> res(n,0);
  for(int i=0;i<n;i++){
    while(!stk.empty() && nums[stk.top()]>=nums[i]){
      stk.pop();
    }
    if(!stk.empty()){
      res[i]=stk.top()+1;
    }
    stk.push(i);
  }
  return res;
}
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int> res=n_s_p(n,arr);
  for(int i=0;i<n;i++){
    cout<<res[i]<<" ";
  }
  return 0;
}
