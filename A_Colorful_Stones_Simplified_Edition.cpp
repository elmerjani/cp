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
    fastio();
    string s,t;
    cin>>s>>t;
    int i=1;
    int lefts=0,leftt=0;
    int n=s.length(),m=t.length();
    while(lefts<n&& leftt<m){
        if(s[lefts]==t[leftt]){
            i++;
            lefts++;
            leftt++;

        }
        else{
            leftt++;
        }
    }
    cout<<i;


    return 0;
}