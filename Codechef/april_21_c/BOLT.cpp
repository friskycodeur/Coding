#include<bits/stdc++.h>
using namespace std;


double roundOff(double a){
    a=a*100;
    a=round(a);
    a=a/100;
    return a;
}

int main(){
    int t;cin>>t;
    while(t--){
        double k1,k2,k3,v;cin>>k1>>k2>>k3>>v;
        double res=k1*k2*k3*v;
        res=100/res;
        res=roundOff(res);
        if(res<9.58) cout<<"YES\n";
        else cout<<"NO\n";
    }
}