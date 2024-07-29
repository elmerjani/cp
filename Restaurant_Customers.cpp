#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<pair<int,int>> events;
  for(int i=0;i<n;i++){
    int arrival,leaving;
    cin>>arrival>>leaving;
    events.push_back({arrival,1});
    events.push_back({leaving,-1});
  }
  sort(events.begin(),events.end());
  int max_cus=0;
  int current=0;
  for(const auto& event:events){
    current+=event.second;
    max_cus=max(current,max_cus);
  }
  cout<<max_cus;
  return 0;
}
