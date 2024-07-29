#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    int a[n];
    int log[n+1];log[1]=0;
    for(int i=2;i<=n;i++)log[i]=log[i/2]+1;
    int st[n][log[n]+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
        st[i][0]=a[i];
    }
    for(int k=1;k<=log[n];k++){
        for(int i=0;i+(1<<k)<=n;i++){
            st[i][k]=max(st[i][k-1],st[i+(1<<(k-1))][k-1]);
        }
    }
    int count=0;
    while(m--){
        int A,B;
        cin >> A >>B;
        if(A==B)count++;
        else{
            A--;B-=2;
        
        int length=B-A+1;
        int l=log[length];
        if(max(st[A][l],st[B-(1<<l)+1][l])==a[A])count++;
        }
        
    }
    cout<<count;
    

    

    return 0;
}