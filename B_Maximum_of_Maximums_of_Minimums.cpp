#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    int a[n];
    cin>>a[0];
    int maximum = a[0],minimum = a[0];
    int log[n+1];
    log[1]=0;
    for(int i=2;i<=n;i++)log[i]=log[i/2]+1;
    int st[n][log[n]+1];
    st[0][0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>maximum)maximum=a[i];
        if(a[i]<minimum)minimum=a[i];
        st[i][0]=a[i];
    } 
    if(k==1)cout<<minimum;
    else if(k==2){
        for(int j=1;j<=log[n];j++){
        for(int i=0;i<=n-(1<<j);i++){
            st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);

        }
    }
    int newmaximum=-1000000000;
    
    for(int i=0;i<n-1;i++){
        int left=0,right=i;
        int length=right-left+1;
        int l=log[length];
        int min1=min(st[left][l],st[right-(1<<l)+1][l]);
        left=i+1;
        right=n-1;
        length=right-left+1;
        l=log[length];
        int min2=min(st[left][l],st[right-(1<<l)+1][l]);
        int localmaximum=max(min1,min2);
        newmaximum=max(newmaximum,localmaximum);
        
    }
    cout<<newmaximum;

    }
    else cout<<maximum;


    return 0;
}