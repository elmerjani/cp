#include <bits/stdc++.h>
using namespace std;

/* int countOnes(string s,int n){
    int i=0;
    while(i<n&&s[i]=='0')i++;
        if(i==n)return 0;
        else{
            int count=0,countones=1;
            i++;
            for(i;i<n;i++){
                if(s[i]=='1')countones++;
                else{
                    count+=(countones+1);
                }
            }
            return count;
            

        }

}
int countZeros(string s,int n){
    int i=n-1;
    while(i>=0&&s[i]=='1')i--;
        if(i==-1)return 0;
        else{
            int count=0,countzeros=1;
            i--;
            for(i;i>=0;i--){
                if(s[i]=='0')countones++;
                else{
                    count+=(countones+1);
                }
            }
            return count;
            

        }

} */




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        
        string s;cin >> s;
        int n=s.length();
        int i=0;
        while(i<n&&s[i]=='0')i++;
        if(i==n)cout<<0;
        else{
            long long count=0,countones=1;
            i++;
            for(i;i<n;i++){
                if(s[i]=='1')countones++;
                else{
                    count+=(countones+1);
                }
            }
            cout<<count;
            

        }
        cout<<"\n";

    }

    return 0;
}