#include <bits/stdc++.h>
#define ll long long;
#define  endl "\n";
using namespace std;
int pow(int a,int b){
  if(b==0)return 1;
  return a*pow(a,b-1);
}
int search(pair<long long,long long > a[],int n,long long x){
  int left=0,right=n-1;
  while(left<=right){
    int mid=left+(right-left)/2;
    if(x==a[mid].first)return mid;
    else if(x>a[mid].first)left=mid+1;
    else right=mid-1;
  }
  return -1;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      map<int,int> mp;
      for(int i=0; i<n; i++){
        int ai;
        cin >> ai;
        mp[ai]++;
       
      }
      int count=0;
      for(const auto& ai:mp){
        count+=(ai.second/3);
      }
      cout << count << endl;
    }
    
      
    
    

    

    
      
      


    
    

    

}

    
   
