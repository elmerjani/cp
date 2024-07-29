#include <bits/stdc++.h>
using namespace std;
int countBetsSet(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n&(n-1);
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
       int k=0;
       while(k<32 &&(1<<k+1)-1<n){
        k++;
        

       }
       cout<<(1<<k)-1<<"\n";
    }
    
    

    return 0;
}