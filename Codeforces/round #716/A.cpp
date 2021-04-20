#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        int n,x,f=1;cin>>n;
        while(n--){
            cin>>x;
            int temp=sqrt(x);
            if(temp*temp!=x) f=0;
        }
        if(f==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}