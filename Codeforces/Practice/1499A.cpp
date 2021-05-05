#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k1,k2;cin>>n>>k1>>k2;
        int w,b;cin>>w>>b;
        int white=k1+k2;
        if((white/2)>=w && (((2*n-white)/2)>=b)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}