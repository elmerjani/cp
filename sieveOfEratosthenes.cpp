#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int > sieveOfEratosthenes(int n){
    vector<bool> primes(n+1,true);
    primes[0]=primes[1]=false;
    for(int i=2;i*i<=n;i++){
        if(primes[i]){
            for(int j=i*i;j<=n;j+=i){
                primes[j]=false;
            }
        }

    }
    vector<int> primesN;
    for(int i=2;i<=n;i++){
        if(primes[i]){
            primesN.push_back(i);
        }
    }
    return primesN;
    

}
int main(){
    int t;
    cin >> t;
    vector<int> primes=sieveOfEratosthenes(1000001);
   /*  for(int x:primes){
        cout << x << endl;
    } */
     for(int i=0;i<t;i++){
        int n;
        cin>>n;
        set<pair<int,int>> p;

        set<int> s;
        for(int j=0;j<primes.size();j++){
            if(primes[j]>n){
                break;
            }
            if(s.count(n-primes[j])==1){
                pair<int,int> px=pair<int,int>(min(primes[j],n-primes[j]),max(primes[j],n-primes[j]));
                p.insert(px);
                /* s.erase(n-primes[j]); */
            }
            else{
                s.insert(primes[j]);
            }
        }
        cout<<p.size()<<"\n";
        for(pair<int,int> pi:p){
            
            cout<<min(pi.first,pi.second)<<" "<<max(pi.first,pi.second)<<"\n"; 
            
        }
        
        
    } 
    return 0;
    
    
}