#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c ;
        if(c!=a+1){
            cout<<-1<<"\n";
            continue;
        }
        if(a==0){
            cout<<b<<"\n";
            continue;
        }
        
            ll height=0,curr=0,lastRow=0;

            while(a+b>0){
                if(a>0){
                    if(a>=(1<<height)){
                        a-=(1<<height);
                    }else {
                        a=0;
                        curr=(1<<height)-a;
                        lastRow=a*2+curr;

                    }
                    height++;
                    
                    
                }
                else {
                    if(curr!=0){
                        
                        b-=(b>=curr?curr:b);
                    }
                    while(b>0){
                        b-=(b>=lastRow?lastRow:b);
                        height++;
                    }
                }
                 

            }
            cout<<height<<"\n";
           
            
        

        

        
        
        
    }
}