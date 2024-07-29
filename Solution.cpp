#include <bits/stdc++.h>
typedef long long ll;
bitset<10000000000000> can;
using namespace std;
int getMax(stack<pair<int,int>> &s1,stack<pair<int,int>> &s2){
  if (s1.empty() || s2.empty()) return  s1.empty() ? s2.top().second : s1.top().second;
    
  else return  max(s1.top().second, s2.top().second);
    
}
void addElement(stack<pair<int,int>> &st,int newElem){
  int newMax=st.empty()?newElem:max(newElem,st.top().second);
  st.push({newElem,newMax});
}
void removeElement(stack<pair<int,int>> &s1,stack<pair<int,int>> &s2){
  if (s2.empty()) {
    while (!s1.empty()) {
        int element = s1.top().first;
        s1.pop();
        int maximum = s2.empty() ? element : max(element, s2.top().second);
        s2.push({element, maximum});
    }
}

s2.pop();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,q;
    cin >> n >> q;
    int a[n]={};
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    while(q--){
      int d;
      cin >> d;
      
      stack<pair<int,int>> s1,s2;
      for(int i=0;i<d;i++){
        addElement(s1,a[i]);
      }
      int minimum=getMax(s1,s2);
      for(int i=d;i<n;i++){
        removeElement(s1,s2);
        addElement(s1,a[i]);
        if(getMax(s1,s2)<minimum)minimum=getMax(s1,s2);

      }
      cout<<minimum<<"\n";

    }



   
    
   

   
      

      
   }
    
    

    

    
      
      


    
    

    



    
   
