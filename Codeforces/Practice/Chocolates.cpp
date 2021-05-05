#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

long long n,ans=0;

int32_t main(){
    cin>>n;
    long long a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long cur=1e18;
    for(int i=n;i>=0;i--){
        cur=min(cur-1,a[i]);
        cur=max(0LL,cur);
        ans+=cur;
    }
    cout<<ans;
    return 0;
}