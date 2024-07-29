#include <iostream>
#include <bits/stdc++.h>
typedef  long long ll ;
using namespace std;

int main(){
  int r1,r2,c1,c2,d1,d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1>>d2;
  bool can=false;
  for(int i=1;i<=r1;i++){
    if((c1+d1-2*i==r2)&&(r1+d1-2*i==c2)&&(r1+c2-2*i==d2)){
      can=true;
      cout<<i<<" "<<r1-i<<"\n";
      cout<<c1-i<<" "<<d1-i<<"\n";
      break;
    }

  }
  if(!can)cout<<-1;


  
}
