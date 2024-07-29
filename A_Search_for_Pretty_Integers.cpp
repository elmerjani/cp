#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int j=0;j<m;j++){
        cin >> b[j];
    
    }
    sort(a,a+n);
    sort(b,b+m);
    bool ok = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<a[i];
                ok = true;
                break;
            }
        }
        if(ok)break;
    }
    if(!ok)cout<<min(a[0],b[0])<<max(a[0],b[0]);

    return 0;
}