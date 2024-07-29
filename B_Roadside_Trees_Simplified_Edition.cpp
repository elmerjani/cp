
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
    ll tc;     \
    cin >> tc; \
    while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
}

int main()
{
    int n;
    cin >> n;
    long long a[n]={};
    for(int i=0; i<n; i++){
        cin >>a[i];
    }
    long long count=0;
    for(int i=0;i<n;i++){
        if(i==0){
            count+=(a[i]+1);
        }
        else{
           
                count+=(2+abs(a[i]-a[i-1]));
            
           
        }
    }
    cout<<count<<endl;

    return 0;
}