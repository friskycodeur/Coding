#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long n,g,x=0;
    int t,rem;
    cin>>t;
    long a[n]={};
    while(t--){
       cin>>n;
       while(n){
           if(n%10!=0){
               rem=n%10;
               x=x*10+rem;
           }
           n/=10;
       }
       for(int i=1;i<=n;i++){
            if(g!=0)
                a[i]=x/g;
            else
                a[i]=0;
       }
        const size_t len = sizeof(a) / sizeof(a[0]);
        std::unordered_set<int> res(a, a + len);
        cout << res.size()<< endl;
    }
    return 0;
}