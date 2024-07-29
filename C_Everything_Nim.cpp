#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n]={};
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        vector<int> dp;
        int x=a[0];
        dp.push_back(0);//0 for alice
        for(int i=0; i<n; i++){
            if(i==0){
                if(a[i]==1){
                    dp.push_back(1);
                }
                else{

                }
            }
            else{

            }

        }


    }
    

    return 0;
}