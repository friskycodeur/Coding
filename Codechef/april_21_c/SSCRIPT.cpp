#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i] =='*'){
                cnt++;
                if(cnt==k){
                    break;
                }
            }
            if(s[i]!='*'){
                cnt=0;
            }
        }
        if(cnt==k) cout<<"YES\n";
        else cout<<"NO\n";
    }
}