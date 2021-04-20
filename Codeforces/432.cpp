#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,cnt=0;cin>>n>>k;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        x=x+k;
        if(x<=5) cnt++;
    }
    cout<<cnt/3<<endl;

}