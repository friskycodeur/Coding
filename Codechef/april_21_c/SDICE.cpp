#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n,ans=0,d,rem;cin>>n;
        d=n/4;
        rem=n%4;
        if(d>=2){
            ans=(d-1)*(4*11);
            d=1;
        }
        if(d==1){
            for(long long i=0;i<rem;i++){
                ans+=11;
            }
            for(long long i=0;i<(4-rem);i++){
                ans+=15;
            }
            d=0;
        }
        if(d==0){
            if(rem==1) ans+=20;
            if(rem==2) ans+=36;
            if(rem==3) ans+=51;
        }
        cout<<ans<<endl;
    }
}