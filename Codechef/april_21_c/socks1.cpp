#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z,cnt=0;cin>>x>>y>>z;
    if(x==y) cnt++;
    if(z==y) cnt++;
    if(x==z) cnt++;

    if(cnt>=1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}