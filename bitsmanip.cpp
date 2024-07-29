#include <bits/stdc++.h>

using namespace std;
int countSetBits(int n){
    int count=0;
    while(n!=0){
        count++;
        n=n&(n-1);
    }
    return count;   
}



int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m]={};
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int fedor;
    cin>>fedor;
    int count=0;
    for(int i=0;i<m;i++){
        if(countSetBits(fedor^a[i])<=k)count++;
    }
    cout<<count<<endl;
    
   

    return 0;
}