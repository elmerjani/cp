#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n>>q;
    int log[n+1];
    log[1]=0;
    for(int i=2;i<=n;i++){
        log[i]=log[i/2]+1;
    }
    int a[n];
    int m[n][log[n]+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
        m[i][0]=a[i];
    }
    for(int k=1;k<=log[n];k++){
        for(int i=0;i+(1<<k)-1<n;i++){
            m[i][k]=m[i][k-1]+m[i+(1<<(k-1))][k-1];
        }
    }
    for(int i=0 ;i<q;i++){
        int l,r;
        cin >> l>>r;
        l--;r--;
        int length=r-l+1;
        int k=log[length];
        
        cout<<min(m[l][k],m[r-(1<<k)+1][k])<<"\n"; 
        
    }
    /* for(int i=0;i<=n;i++){
        cout<<log[i]<<" ";
    } */


}
/*7
6
4
4
2
2
2
2
6
4
4
2
2
2
2
4
4
2
2
2
2
6
2
2
2
2
2
2
2
2
9
4
4
4
4
8*/