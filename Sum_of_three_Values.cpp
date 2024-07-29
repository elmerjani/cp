#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
    int n,x;
    cin>>n>>x;
    map<int,int> mp;
    vector<pair<int,int>> nums;
    for(int i=0;i<n;i++){
      int ai;
      cin>>ai;
      nums[i]={ai,i+1};
    }
    sort(nums.begin(),nums.end());
    int left=0,right=n-1;
    bool exists=false;
    while(left<right){
      if(x-nums[left].first-nums[right].first<=0){
        right--;
      }
      else if(mp.count(x-nums[left].first-nums[right].first)){
        exists=true;
        cout<<mp[x-nums[left].first-nums[right].first]<<" "<<left+1<<" "<<right+1;
        break;
      }
      else{
        mp[nums[left].first]=nums[left].second;
      }
    }
    if(!exists){
      cout<<"IMPOSSIBLE";
    }



}
