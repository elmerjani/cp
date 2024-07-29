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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count=0;
    int left=0,right=n-1;
    while(left<n && s[left]=='.'){
        left++;
    }
    while(right>=0 && s[right]=='.'){
        right--;
    }
    if(left==n){
        cout<<n;
    }
    else if(right==left){
        if(s[left]=='R')cout<<left;
        else cout<<(n-1-right);
    }
    else{
        if(s[left]=='R' && s[right]=='R'){
            count+=(left);
            right--;
            while(s[right]!='L'){
                right--;
                count++;
            }
           
            int i=0;
            
            for(int j=left; j<=right;j++){
                if(s[j]=='.')i++;
                else if(s[j]=='L'){
                    if(i%2==1)count++;

                }else{
                    i=0;

                }
            }
           

        }
        else if(s[left]=='R' && s[right]=='L'){
            count+=(left);
            count+=(n-1-right);
           int i=0;
            
            for(int j=left; j<=right;j++){
                if(s[j]=='.')i++;
                else if(s[j]=='L'){
                    if(i%2==1)count++;

                }else{
                    i=0;

                }
            }

        }
        else if(s[left]=='L' && s[right]=='R'){
           left++;right--;
            while( s[left]!='R'){
                count++;
                left++;
            }
            while(s[right]!='L'){
                count++;
                right--;


            }
            int i=0;
            
            for(int j=left; j<=right;j++){
                if(s[j]=='.')i++;
                else if(s[j]=='L'){
                    if(i%2==1)count++;

                }else{
                    i=0;

                }
            }


        }
        else{
            count+=(n-1-right);
            char flag='L';
            
            
            int i=0;
            
            for(int j=left; j<=right;j++){
                if(s[j]=='.'){
                    if(flag=='L')count++;
                    else i++;
                }
                else if(s[j]=='L'){
                    flag='L';
                    

                }else{
                    i=0;

                }
            }


        }
        cout<<count;
    }
    

    return 0;
}